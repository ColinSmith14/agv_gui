#include "include/battery_node_1.hpp"

BatterySub1::BatterySub1()
    : Node("battery_1_sub")
{
    battery_1_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/battery1", 10,
        std::bind(&BatterySub1::topic_callback, this, std::placeholders::_1));
}

void BatterySub1::topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
    charge = msg->data.c_str();

    RCLCPP_INFO(this->get_logger(), "Received charge: %s", charge.toStdString().c_str());

    emit changedBattery(charge);
}

#include "battery_node_1.moc"
