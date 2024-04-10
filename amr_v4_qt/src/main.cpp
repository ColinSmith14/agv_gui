#include <QApplication>
#include <QFile>
#include <rclcpp/rclcpp.hpp>
#include "main_gui.h"
#include "battery_node.h"
#include "motor_node.h"
#include "health_node.h"
#include "robot_node.h"

static void siginthandler(int /*param*/)
{
  QApplication::quit();
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    rclcpp::init(argc, argv);

    auto batterySub_ = std::make_shared<BatterySub>("battery_subscriber");
    auto robotSub_ = std::make_shared<RobotSub>("robot_subscriber");
    auto motorScreenSub_ = std::make_shared<MotorSub>("motor_subscriber");
    auto healthScreenSub_ = std::make_shared<HealthSub>("health_subscriber");
    auto runningScreenSub_ = std::make_shared<RunningSub>("running_subscriber");
    auto mainGui = std::make_shared<MainGui>(batterySub_, robotSub_, motorScreenSub_, healthScreenSub_, runningScreenSub_);

    QFile file("amr_v4_qt/include/styles.qss");
    if(file.open(QFile::ReadOnly)){
      QString stylesheet = QLatin1String(file.readAll());
      app.setStyleSheet(stylesheet);
    }

  
    mainGui->setFixedSize(800, 480);
    mainGui->show();

    rclcpp::executors::MultiThreadedExecutor exec;
    exec.add_node(batterySub_);
    exec.add_node(robotSub_);
    exec.add_node(motorScreenSub_);
    exec.add_node(healthScreenSub_);
    exec.add_node(runningScreenSub_);

     signal(SIGINT, siginthandler);

    while (rclcpp::ok()) {
        exec.spin_some();
        app.processEvents();
    }


    exec.remove_node(batterySub_);
    exec.remove_node(robotSub_);
    exec.remove_node(motorScreenSub_);
    exec.remove_node(healthScreenSub_);
    exec.remove_node(runningScreenSub_);
    rclcpp::shutdown();

    return app.exec();
}

