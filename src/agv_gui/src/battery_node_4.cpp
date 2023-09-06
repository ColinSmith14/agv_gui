#include "include/battery_node_4.hpp"

BatterySub4::BatterySub4()
    : Node("battery_4_sub")
{
    battery_4_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/battery4", 10,
        std::bind(&BatterySub4::topic_callback, this, std::placeholders::_1));
}

void BatterySub4::topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
    charge = msg->data.c_str();

    RCLCPP_INFO(this->get_logger(), "Received charge: %s", charge.toStdString().c_str());

    emit changedBattery(charge);
}

#include "battery_node_4.moc"
