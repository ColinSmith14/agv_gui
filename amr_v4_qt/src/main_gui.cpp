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


    mainScreen = new MainScreen();
    homeScreen = new HomeScreen();
    motorScreen = new MotorScreen();


    auto mainLayout = new QVBoxLayout(centralWidget);
    mainLayout->addWidget(mainScreen);


    QString assetPath = "amr_v4_qt/assets/fisher_logo.png";

    QPixmap fisherLogo(assetPath);
    homeScreen->ui.fisherLogo->setPixmap(fisherLogo);
    motorScreen->ui.fisherLogo->setPixmap(fisherLogo);


    // this section controls the main content on the screen
    mainScreen->ui.mainContent->addWidget(homeScreen);
    mainScreen->ui.mainContent->addWidget(motorScreen);

    mainScreen->ui.mainContent->setCurrentWidget(homeScreen);

    
    
    // this section connects the tabs(push buttons) to their main screens
    connect(homeScreen->ui.motorScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);
    connect(motorScreen->ui.homeScreenButton, &QPushButton::clicked, this, &MainGui::onTabClicked);


    // connecting modeSwitch button
    connect(homeScreen->ui.modeButton, &QPushButton::clicked, this, &MainGui::updateMode); // Connect the mode switch button
    connect(homeScreen->ui.pinButton, &QPushButton::clicked, this, &MainGui::updatePin);
    

    // this section connects the ros2 nodes to their respective screen sections
    connect(amr_node.get(), &AmrNode::changedBattery, this, &MainGui::updateBattery);
    connect(amr_node.get(), &AmrNode::changedMotor, this, &MainGui::updateMotors);
    connect(amr_node.get(), &AmrNode::changedError, this, &MainGui::updateError);
    connect(amr_node.get(), &AmrNode::changedRobot, this, &MainGui::updateRobot);
    connect(amr_node.get(), &AmrNode::changedEstop, this, &MainGui::updateEstop);

    connect(mainScreen->ui.exitButton, &QPushButton::clicked, this, &MainGui::closeWindow);
    connect(mainScreen->ui.minimizeButton, &QPushButton::clicked, this, &MainGui::minimizeWindow);

    connect(timer, &QTimer::timeout, this, &MainGui::updateWifi);
    timer->start(1000); // Start the timer with a 1-second interval



    setCentralWidget(centralWidget);
    
}
void MainGui::onTabClicked() {
    QObject* senderObj = sender();
    switchToTabScreen(senderObj);
}

void MainGui::switchToTabScreen(QObject* senderObj) {
    if(senderObj == homeScreen->ui.motorScreenButton) {
        mainScreen->ui.mainContent->setCurrentWidget(motorScreen);
    }
    else if(senderObj == motorScreen->ui.homeScreenButton) {
        mainScreen->ui.mainContent->setCurrentWidget(homeScreen);
    }
}
void MainGui::updateError(const bool &slam_lidar, const bool &estop_lidar, const bool &camera)
{
    if(slam_lidar)
    {
        homeScreen->ui.hesaiLabel->setStyleSheet("QLabel { background: green; color: white }");
    }
    else
    {
        homeScreen->ui.hesaiLabel->setStyleSheet("QLabel { background: red; color: black}");
    }
    if(estop_lidar)
    {
        homeScreen->ui.sickLabel->setStyleSheet("QLabel { background: green; color: white }");
    }
    else
    {
        homeScreen->ui.sickLabel->setStyleSheet("QLabel { background: red; color: black }");
    }
    if(camera)
    {
        homeScreen->ui.cameraLabel->setStyleSheet("QLabel { background: green; color: white }");
    }
    else
    {
        homeScreen->ui.cameraLabel->setStyleSheet("QLabel { background: red; color: black }");
    }
    
    

}
void MainGui::updateEstop(const bool &data) {
   
    if(data){
        homeScreen->ui.estopLabel->setStyleSheet("QLabel { background: #ff0000 }");
        motorScreen->ui.estopLabel->setStyleSheet("QLabel { background: #ff0000 }");
    } else{
        homeScreen->ui.estopLabel->setStyleSheet("QLabel { background: #555 }");
        motorScreen->ui.estopLabel->setStyleSheet("QLabel { background: #555 }");
    }
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


void MainGui::updateBattery(const float &voltage,
                            const float &temperature,
                            const float &current,
                            const float &charge,
                            const float &percentage)
{
    mainScreen->ui.percentageLabel->setText(QString("%1").arg(percentage) + "%");
    mainScreen->ui.voltageLabel->setText(QString("%1").arg(voltage) + "V");
    mainScreen->ui.currentLabel->setText(QString("%1").arg(current) + "A");

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

void MainGui::updateMode()
{
    driveMode = !driveMode;
    amrNode->mode_callback(driveMode);

    if(driveMode)
    {
        homeScreen->ui.modeButton->setText(QString("%1").arg("Mode: Auto"));
        homeScreen->ui.modeButton->setStyleSheet("QPushButton { background: green; color: white }");
    } else {
        homeScreen->ui.modeButton->setText(QString("%1").arg("Mode: Manual"));
        homeScreen->ui.modeButton->setStyleSheet("QPushButton { background: yellow; color: black}");
    }

}

void MainGui::updatePin()
{
    pinState = !pinState;
    amrNode->pin_callback(pinState);
    if(pinState)
    {
        homeScreen->ui.pinButton->setText(QString("%1").arg("Pin: Up"));
    } else {
        homeScreen->ui.pinButton->setText(QString("%1").arg("Pin: Down"));
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
