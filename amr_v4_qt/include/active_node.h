#ifndef ACTIVE_NODE_H
#define ACTIVE_NODE_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <QObject>

using std::placeholders::_1;

class ActiveSub : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    explicit ActiveSub(const std::string& nodeNamee);
    void topic_callback(const std_msgs::msg::String::SharedPtr msg);

    QString status;

signals:
    void changedStatus(const QString &data);

private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr active_sub_;
};

#endif // ACTIVE_NODE_H
