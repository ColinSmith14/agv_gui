#include "battery_node.h"

BatterySub::BatterySub(const std::string& nodeName)
    : Node(nodeName)
{
    battery_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/battery", 10,
        std::bind(&BatterySub::topic_callback, this, std::placeholders::_1));
}

void BatterySub::topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
    charge = msg->data.c_str();

    // RCLCPP_INFO(this->get_logger(), "Received charge: %s", charge.toStdString().c_str());

    emit changedBattery(charge);
}