#ifndef RUNNING_NODE_H
#define RUNNING_NODE_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <QObject>

using std::placeholders::_1;

class RunningSub : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    explicit RunningSub(const std::string& nodeName);
    void mode_callback(const std_msgs::msg::String::SharedPtr msg);

    QString mode;

signals:
    void changedMode(const QString &data);

private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr mode_sub_;
};

#endif // RUNNING_NODE_H
