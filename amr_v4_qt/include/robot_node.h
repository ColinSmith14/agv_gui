#ifndef ROBOT_NODE_H
#define ROBOT_NODE_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "amr_v4_msgs_srvs/msg/robot.hpp"
#include <QObject>

using std::placeholders::_1;

class RobotSub : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    explicit RobotSub(const std::string& nodeName);
    void topic_callback(const amr_v4_msgs_srvs::msg::Robot::SharedPtr msg);
    QString status;

    

signals:
    void changedStatus(const QString &status);

private:
    rclcpp::Subscription<amr_v4_msgs_srvs::msg::Robot>::SharedPtr robot_sub_;
};

#endif // ROBOT_NODE_H
