#include "main_gui.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>
#include <QProcess>
#include <QTimer>
#include <QLabel>
#include <QDebug>
#include <QDateTime>

MainGui::MainGui(std::shared_ptr<AmrNode> amr_node, QWidget *parent)
    : QMainWindow(parent), amrNode(amr_node)
{
    centralWidget = new QWidget(this);
    QTimer* timer = new QTimer(this);

    estopActive = false;
    driveMode = true; // false is manual, true is auto  
    pinState = true;

    mainScreen = new MainScreen();
    homeScreen = new QWidget();
    motorScreen = new MotorScreen();
    healthScreen = new HealthScreen();
    runningModeScreen = new RunningModeScreen();


    auto mainLayout = new QVBoxLayout(centralWidget);
    mainLayout->addWidget(mainScreen);

    QString assetPath = "ros2_cont_amr/amr_v4_qt/assets/fisher_logo.png";

    QPixmap fisherLogo(assetPath);
    // Scale the pixmap before setting it to the label
    QPixmap scaledLogo = fisherLogo.scaled(190, 80, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    mainScreen->ui.label->setPixmap(scaledLogo);
    // Set the label size to fit the scaled pixmap
    mainScreen->ui.label->setFixedSize(190, 80);


    // this section controls the main content on the screen
    mainScreen->ui.mainContent->addWidget(homeScreen);
    mainScreen->ui.mainContent->addWidget(motorScreen);
    mainScreen->ui.mainContent->addWidget(healthScreen);
    mainScreen->ui.mainContent->addWidget(runningModeScreen);
    
    
    // this section connects the tabs(push buttons) to their main screens
    connect(mainScreen->ui.homeScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);
    connect(mainScreen->ui.motorScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);
    connect(mainScreen->ui.healthScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);
    connect(mainScreen->ui.runningScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);


    // connecting modeSwitch button
    connect(runningModeScreen->ui.modeButton, &QPushButton::clicked, this, &MainGui::updateMode); // Connect the mode switch button
    connect(runningModeScreen->ui.pinButton, &QPushButton::clicked, this, &MainGui::updatePin);
    

    // this section connects the ros2 nodes to their respective screen sections
    connect(amr_node.get(), &AmrNode::changedBattery, this, &MainGui::updateBattery);
    connect(amr_node.get(), &AmrNode::changedMotor, this, &MainGui::updateMotors);
    connect(amr_node.get(), &AmrNode::changedCamera, this, &MainGui::updateCamera);
    connect(amr_node.get(), &AmrNode::changedLidar, this, &MainGui::updateLidar);
    connect(amr_node.get(), &AmrNode::changedLidar2, this, &MainGui::updateLidar2);
    connect(amr_node.get(), &AmrNode::changedRobot, this, &MainGui::updateRobot);
    connect(amr_node.get(), &AmrNode::changedEstop, this, &MainGui::updateEstop);


    connect(timer, &QTimer::timeout, this, &MainGui::updateWifi);
    connect(timer, &QTimer::timeout, this, &MainGui::updateClock);
    timer->start(1000); // Start the timer with a 1-second interval



    setCentralWidget(centralWidget);
    
}
void MainGui::onTabClicked() {
    QObject* senderObj = sender();
    switchToTabScreen(senderObj);
}

void MainGui::switchToTabScreen(QObject* senderObj) {
    if(senderObj == mainScreen->ui.homeScreenButton) {
        mainScreen->ui.mainContent->setCurrentWidget(homeScreen);
    }
    else if(senderObj == mainScreen->ui.motorScreenButton) {
        mainScreen->ui.mainContent->setCurrentWidget(motorScreen);
    }
    else if(senderObj == mainScreen->ui.healthScreenButton) {
        mainScreen->ui.mainContent->setCurrentWidget(healthScreen);
    }
    else if(senderObj == mainScreen->ui.runningScreenButton) {
        mainScreen->ui.mainContent->setCurrentWidget(runningModeScreen);
    }

}

void MainGui::updateEstop(const bool &data) {
   
    if(data){
        mainScreen->ui.estopLabel->setStyleSheet("QLabel { background: #ff0000 }");
    } else{
        mainScreen->ui.estopLabel->setStyleSheet("QLabel { background: #555 }");
    }
}

void MainGui::updateClock() {
    QDateTime current = QDateTime::currentDateTime();
    QString formattedTime = current.toString("MM/dd/yyyy hh:mm");
    mainScreen->ui.dateTimeLabel->setText(formattedTime); 
}

void MainGui::updateWifi() {
    // update this to use the wifi logo based on strength
    int signalStrength = getWifiSignalStrength();
    int squareSize = 60; // Set the size of the square

    if (signalStrength != -1) {
        QString wifiLogoPath;
        if (signalStrength < -50) {
            wifiLogoPath = "ros2_cont_amr/amr_v4_qt/assets/wifi1.png";
        } else if (signalStrength < -70) {
            wifiLogoPath = "ros2_cont_amr/amr_v4_qt/assets/wifi2.png";
        } else if (signalStrength < -90) {
            wifiLogoPath = "ros2_cont_amr/amr_v4_qt/assets/wifi3.png";
        }

        if (!wifiLogoPath.isEmpty()) {
            QPixmap wifiMap(wifiLogoPath);
            wifiMap = wifiMap.scaled(squareSize, squareSize, Qt::KeepAspectRatio, Qt::SmoothTransformation); // Scale pixmap to squareSize while keeping aspect ratio
            mainScreen->ui.wifiLabel->setPixmap(wifiMap);
        }

    } else {
        // Optionally, set a default or placeholder pixmap when WiFi strength is N/A
        QPixmap defaultPixmap("ros2_cont_amr/amr_v4_qt/assets/wifiDefault.png");
        defaultPixmap = defaultPixmap.scaled(squareSize, squareSize, Qt::KeepAspectRatio, Qt::SmoothTransformation); // Scale pixmap to squareSize while keeping aspect ratio
        mainScreen->ui.wifiLabel->setPixmap(defaultPixmap);
    }

    // Set the QLabel to a fixed square size
    //mainScreen->ui.wifiLabel->setFixedSize(squareSize, squareSize);
    mainScreen->ui.wifiLabel->setAlignment(Qt::AlignCenter);
    //mainScreen->ui.wifiLabel->setScaledContents(true); // This will ignore aspect ratio; remove if you want to keep the pixmap's aspect ratio.
}

int MainGui::getWifiSignalStrength() {
    QProcess process;
    QString program = "iwconfig";
    QStringList arguments;
    process.start(program, arguments, QIODevice::ReadWrite);
    process.waitForFinished();

    QString result = process.readAllStandardOutput();
    int index = result.indexOf("Signal level=");
    if (index != -1) {
        // Extracting the signal strength value
        int signalStrength = (result.mid(index + 13, 3)).toInt();
        //  qDebug() << "Signal Strength:" << signalStrength;
        return signalStrength;
    } else {
        return -1; // or any other appropriate value to indicate "N/A"
    }
}

void MainGui::checkLidars() {
    QProcess process;
    QString arguments;
    QString program = "ethtool";
    QStringList devices = {"etho0", "etho1"};

}

void MainGui::updateBattery(const QString &data)
{
    int charge = data.toInt();
    int squareSize = 60; // Set the size of the square
    QString batteryLogoPath;
    if(charge < 5)
    {
        batteryLogoPath = "ros2_cont_amr/amr_v4_qt/assets/Battery5.png";
    }
    else if(charge < 25)
    {
        batteryLogoPath = "ros2_cont_amr/amr_v4_qt/assets/Battery4.png";
    }
    else if(charge < 50)
    {
        batteryLogoPath = "ros2_cont_amr/amr_v4_qt/assets/Battery3.png";
    }
    else if(charge < 75)
    {
        batteryLogoPath = "ros2_cont_amr/amr_v4_qt/assets/Battery2.png";
    }
    else if(charge <= 100)
    {
        batteryLogoPath = "ros2_cont_amr/amr_v4_qt/assets/Battery1.png";
    }

    QPixmap batteryMap(batteryLogoPath);
    batteryMap = batteryMap.scaled(squareSize, squareSize, Qt::KeepAspectRatio, Qt::SmoothTransformation); // Scale pixmap to squareSize while keeping aspect ratio
    mainScreen->ui.batteryLabel->setPixmap(batteryMap);
    mainScreen->ui.batteryLabel->setAlignment(Qt::AlignCenter);
}


void MainGui::updateRobot(const QString &data)
{
    mainScreen->ui.scrollingLabel->setText(QString("%1").arg(data));
}

void MainGui::updateMotors(const QString &output_current_right,
                      const QString &output_current_left,
                      const QString &output_current_pin,
                      const QString &error_right,
                      const QString &error_left,
                      const QString &error_pin)
{
    motorScreen->ui.rightMotorCurrent->setText(QString("%1").arg(output_current_right));
    motorScreen->ui.leftMotorCurrent->setText(QString("%1").arg(output_current_left));
    motorScreen->ui.pinMotorCurrent->setText(QString("%1").arg(output_current_pin));
    motorScreen->ui.rightMotorError->setText(QString("%1").arg(error_right));
    motorScreen->ui.leftMotorError->setText(QString("%1").arg(error_left));
    motorScreen->ui.pinMotorError->setText(QString("%1").arg(error_pin));
}
void MainGui::updateCamera(const bool &data)
{
    if(data)
    {
        healthScreen->ui.cameraStatus->setText(QString("Active"));
    } else{
        healthScreen->ui.cameraStatus->setText(QString("Inactive"));
    }

}
void MainGui::updateLidar(const bool &data)
{
    if(data)
    {
        healthScreen->ui.lidar1Status->setText(QString("Active"));
    } else{
        healthScreen->ui.lidar1Status->setText(QString("Inactive"));
    }
}

void MainGui::updateLidar2(const bool &data)
{
    if(data)
    {
        healthScreen->ui.lidar2Status->setText(QString("Active"));
    } else{
        healthScreen->ui.lidar2Status->setText(QString("Inactive"));
    }
}

void MainGui::updateMode()
{
    driveMode = !driveMode;
    amrNode->mode_callback(driveMode);

    if(driveMode)
    {
        runningModeScreen->ui.modeBox->setText(QString("%1").arg("Auto"));
    } else {
        runningModeScreen->ui.modeBox->setText(QString("%1").arg("Manual"));
    }

}

void MainGui::updatePin()
{
    pinState = !pinState;
    amrNode->pin_callback(pinState);
    if(pinState)
    {
        runningModeScreen->ui.pinBox->setText(QString("%1").arg("Active"));
    } else {
        runningModeScreen->ui.pinBox->setText(QString("%1").arg("Not Active"));
    }
}
