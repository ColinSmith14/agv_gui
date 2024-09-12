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

#include "motor_screen.h"
#include "home_screen.h"
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
    
    void updateBattery(const float &voltage,
                            const float &temperature,
                            const float &current,
                            const float &charge,
                            const float &percentage);
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
    void updateError(const bool &slam_lidar,
                     const bool &estop_lidar,
                     const bool &camera);
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
    bool estopActive;
    bool driveMode;
    bool pinState;

    std::shared_ptr<AmrNode> amrNode;

    MainScreen* mainScreen;
    HomeScreen*  homeScreen;
    MotorScreen* motorScreen;
    QStackedWidget* mainContent;
    QWidget* centralWidget;
    QHBoxLayout* mainLayout;

};

#endif // MAIN_GUI_H
