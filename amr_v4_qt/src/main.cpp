#include <QApplication>
#include <QFile>
#include <rclcpp/rclcpp.hpp>
#include "main_gui.h"
#include "amr_node.h"
#include "cstdlib"
#include <QDebug>

static void siginthandler(int /*param*/)
{
  QApplication::quit();
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    rclcpp::init(argc, argv);

    const char* robot_name = std::getenv("ROBOT_MODEL");
    if(robot_name == nullptr)
    {
      return 1;
    }
    
    rclcpp::NodeOptions options;
    options.arguments({"--ros-args", "-r", std::string("__ns:=/") + robot_name, "-r", "__node:=amr_v4s_qt"});

    auto amrNode_ = std::make_shared<AmrNode>(options);
    auto mainGui = std::make_shared<MainGui>(amrNode_);

    // QFile file("~/AMRMAIN/src/amr_v4_qt/include/styles.qss");
    QFile file("amr_v4_qt/include/styles.qss");
    if(file.open(QFile::ReadOnly)){
      QString stylesheet = QLatin1String(file.readAll());
      app.setStyleSheet(stylesheet);
    } else{
      qDebug() << "no style sheet found";
    }
    mainGui->setWindowFlags(Qt::FramelessWindowHint);

    mainGui->setFixedSize(1280, 800);
    //mainGui->showFullScreen();
    mainGui->show();


    rclcpp::executors::MultiThreadedExecutor exec;
    exec.add_node(amrNode_);

    signal(SIGINT, siginthandler);

    while (rclcpp::ok()) {
        exec.spin_some();
        app.processEvents();
    }

    exec.remove_node(amrNode_);
    rclcpp::shutdown();

    return app.exec();
}

