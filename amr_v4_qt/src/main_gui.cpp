#include "main_gui.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>
#include <QProcess>
#include <QTimer>
#include <QLabel>
#include <QDebug>
#include <QDateTime>
#include <cstdlib>
#include <iostream>
#include <thread>

MainGui::MainGui(std::shared_ptr<AmrNode> amr_node, QWidget *parent)
    : QMainWindow(parent), amrNode(amr_node)
{
    centralWidget = new QWidget(this);
    QTimer* timer = new QTimer(this);

    estopActive = false;
    driveMode = true; // false is manual, true is auto  
    pinState = true;
    hesai_ip = "192.168.1.201";
    sick_ip = "192.168.0.1";

    mainScreen = new MainScreen();
    homeScreen = new QWidget();
    motorScreen = new MotorScreen();
    healthScreen = new HealthScreen();
    runningModeScreen = new RunningModeScreen();
    batteryScreen = new BatteryScreen();


    auto mainLayout = new QVBoxLayout(centralWidget);
    mainLayout->addWidget(mainScreen);

    QString assetPath = "amr_v4_qt/assets/fisher_logo.png";

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
    mainScreen->ui.mainContent->addWidget(batteryScreen);
    
    
    // this section connects the tabs(push buttons) to their main screens
    connect(mainScreen->ui.homeScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);
    connect(mainScreen->ui.motorScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);
    connect(mainScreen->ui.healthScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);
    connect(mainScreen->ui.runningScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);
    connect(mainScreen->ui.batteryScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);


    // connecting modeSwitch button
    connect(runningModeScreen->ui.modeButton, &QPushButton::clicked, this, &MainGui::updateMode); // Connect the mode switch button
    connect(runningModeScreen->ui.pinButton, &QPushButton::clicked, this, &MainGui::updatePin);
    

    // this section connects the ros2 nodes to their respective screen sections
    connect(amr_node.get(), &AmrNode::changedBattery, this, &MainGui::updateBattery);
    connect(amr_node.get(), &AmrNode::changedMotor, this, &MainGui::updateMotors);
    connect(amr_node.get(), &AmrNode::changedCamera, this, &MainGui::updateCamera);
    connect(amr_node.get(), &AmrNode::changedRobot, this, &MainGui::updateRobot);
    connect(amr_node.get(), &AmrNode::changedEstop, this, &MainGui::updateEstop);

    connect(mainScreen->ui.exitButton, &QPushButton::clicked, this, &MainGui::closeWindow);
    connect(mainScreen->ui.minimizeButton, &QPushButton::clicked, this, &MainGui::minimizeWindow);

    connect(healthScreen->ui.scanButton, &QPushButton::clicked, this, &MainGui::lidarThread);

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
    else if(senderObj == mainScreen->ui.batteryScreenButton) {
        mainScreen->ui.mainContent->setCurrentWidget(batteryScreen);
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
    QString formattedTime = current.toString("MM/dd/yyyy hh:mm ap");
    mainScreen->ui.dateTimeLabel->setText(formattedTime); 
}

void MainGui::updateWifi() {
    // update this to use the wifi logo based on strength
    int signalStrength = getWifiSignalStrength();
    int squareSize = 60; // Set the size of the square

    if (signalStrength != -1) {
        QString wifiLogoPath;
        if (signalStrength < -50) {
            wifiLogoPath = "amr_v4_qt/assets/wifi1.png";
        } else if (signalStrength < -70) {
            wifiLogoPath = "amr_v4_qt/assets/wifi2.png";
        } else if (signalStrength < -90) {
            wifiLogoPath = "amr_v4_qt/assets/wifi3.png";
        }

        if (!wifiLogoPath.isEmpty()) {
            QPixmap wifiMap(wifiLogoPath);
            wifiMap = wifiMap.scaled(squareSize, squareSize, Qt::KeepAspectRatio, Qt::SmoothTransformation); // Scale pixmap to squareSize while keeping aspect ratio
            mainScreen->ui.wifiLabel->setPixmap(wifiMap);
        }

    } else {
        // Optionally, set a default or placeholder pixmap when WiFi strength is N/A
        QPixmap defaultPixmap("amr_v4_qt/assets/wifiDefault.png");
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

void MainGui::checkLidars() 
{
    QString loadingPath = "amr_v4_qt/assets/loading.png";
    QPixmap loadingImg(loadingPath);
    QString blankPath = "";
    QPixmap blankImg(blankPath);
    QPixmap scaledLoading = loadingImg.scaled(60, 60, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    healthScreen->ui.loadingLabel->setPixmap(scaledLoading);

    std::string hesai_command = "ping -c 1 " + hesai_ip + " > /dev/null 2>&1";
    std::string sick_command = "ping -c 1 " + sick_ip + " > /dev/null 2>&1";

    int hesai_status = system(hesai_command.c_str());
    int sick_status = system(sick_command.c_str());

    if(hesai_status == 0)
    {
        healthScreen->ui.lidar1Status ->setText(QString("Enabled"));
    }
    else {
        healthScreen->ui.lidar1Status ->setText(QString("Disabled"));
    }
    if(sick_status == 0)
    {
        healthScreen->ui.lidar2Status ->setText(QString("Enabled"));
    }
    else {
        healthScreen->ui.lidar2Status ->setText(QString("Disabled"));
    }
    healthScreen->ui.loadingLabel->setPixmap(blankImg);
}

void MainGui::lidarThread() {
    std::thread lidThr([this]() { this->checkLidars(); });
    lidThr.detach();  // Or join() if you want to wait for the thread to finish
}


void MainGui::updateBattery(const float &voltage,
                            const float &temperature,
                            const float &current,
                            const float &charge,
                            const float &percentage)
{
    mainScreen->ui.percentageLabel->setText(QString("%1").arg(percentage) + "%");
    batteryScreen->ui.percentageLabel->setText(QString("%1").arg(percentage) + "%");
    batteryScreen->ui.voltageLabel->setText(QString("%1").arg(voltage) + "V");
    batteryScreen->ui.currentLabel->setText(QString("%1").arg(current) + "A");
    batteryScreen->ui.tempLabel->setText(QString("%1").arg(temperature) + "°F");

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

void MainGui::minimizeWindow()
{
    this->QWidget::setWindowState(Qt::WindowMinimized);
}

void MainGui::closeWindow()
{
    this->close();
    exit(0);
    
}
