#ifndef CHARGE_NODE_HPP
#define CHARGE_NODE_HPP

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <QObject>

using std::placeholders::_1;

class ChargeSub : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    ChargeSub();
    void topic_callback(const std_msgs::msg::String::SharedPtr msg);

    QString charge;

signals:
    void changedStatus(const QString &data);

private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr charge_sub_;
};

#endif // CHARGE_NODE_HPP
