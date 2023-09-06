#ifndef BATTERY_NODE_1_H
#define BATTERY_NODE_1_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <QObject>

using std::placeholders::_1;

class BatterySub1 : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    BatterySub1();
    void topic_callback(const std_msgs::msg::String::SharedPtr msg);

    QString charge;

signals:
    void changedBattery(const QString &data);

private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr battery_1_sub_;
};

#endif // BATTERY_NODE_1_H
