#ifndef ESTOP_PUBLISHER_H
#define ESTOP_PUBLISHER_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <QObject>

using std::placeholders::_1;

class EstopPublisher : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    EstopPublisher();

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr estop_publisher_;
};

#endif // ESTOP_PUBLISHER.H
