#ifndef MAIN_GUI_H
#define MAIN_GUI_H

#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QStackedWidget>

#include "motors.h"
#include "health.h"
#include "running_mode.h"
#include "fisher_screen.h"
#include "main_screen.h"
#include "scrolling_label.h"
#include "amr_node.h"

class MainGui : public QMainWindow {
    Q_OBJECT


public:
    explicit MainGui(std::shared_ptr<AmrNode> amrNode_,
                     QWidget *parent = nullptr);


    int getWifiSignalStrength();

    void setupLayout();
    void updateBattery(const QString &data);
    void onTabClicked();
    void switchToDefaultScreen();
    void switchToTabScreen(QObject* sender);
    void updateWifi();
    void updateMotors(const QString &output_current_right,
                      const QString &output_current_left,
                      const QString &output_current_pin,
                      const QString &error_right,
                      const QString &error_left,
                      const QString &error_pin);
    void updateCamera(const bool &data);
    void updateLidar(const bool &data);
    void updateLidar2(const bool &data);
    void updateMode();
    void updateRobot(const QString &data);
    void updateClock();
    void updateEstop(const bool &data);
    void updatePin();
    void checkLidars();
    void lidarThread();
    void closeWindow();
    void minimizeWindow();


private:

    int leftSectionWidth = width() * 0.15;
    int rightSectionWidth = width() * .25;
    bool estopActive;
    bool driveMode;
    bool pinState;
    std::string hesai_ip;
    std::string sick_ip;

    std::shared_ptr<AmrNode> amrNode;

    MainScreen* mainScreen;
    QWidget* homeScreen;
    MotorScreen* motorScreen;
    HealthScreen* healthScreen;
    RunningModeScreen* runningModeScreen;
    FisherScreen* fisherScreen;
    QStackedWidget* mainContent;
    QWidget* centralWidget;
    QHBoxLayout* mainLayout;

};

#endif // MAIN_GUI_H
