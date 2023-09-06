#include "include/battery_node_3.hpp"

BatterySub3::BatterySub3()
    : Node("battery_3_sub")
{
    battery_3_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/battery3", 10,
        std::bind(&BatterySub3::topic_callback, this, std::placeholders::_1));
}

void BatterySub3::topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
    charge = msg->data.c_str();

    RCLCPP_INFO(this->get_logger(), "Received charge: %s", charge.toStdString().c_str());

    emit changedBattery(charge);
}

#include "battery_node_3.moc"
