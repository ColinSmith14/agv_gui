#ifndef HEALTH_NODE_H
#define HEALTH_NODE_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <QObject>

using std::placeholders::_1;

class HealthSub : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    explicit HealthSub(const std::string& nodeName);
    void camera_callback(const std_msgs::msg::String::SharedPtr msg);
    void lidar_callback(const std_msgs::msg::String::SharedPtr msg);

    QString camera_info;
    QString lidar_info;

signals:
    void changedCamera(const QString &data);
    void changedLidar(const QString &data);

private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr camera_sub_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr lidar_sub_;
};

#endif // HEALTH_NODE_H
