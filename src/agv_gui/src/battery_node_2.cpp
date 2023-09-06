#include "include/battery_node_2.hpp"

BatterySub2::BatterySub2()
    : Node("battery_2_sub")
{
    battery_2_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/battery2", 10,
        std::bind(&BatterySub2::topic_callback, this, std::placeholders::_1));
}

void BatterySub2 ::topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
    charge = msg->data.c_str();

    RCLCPP_INFO(this->get_logger(), "Received charge: %s", charge.toStdString().c_str());

    emit changedBattery(charge);
}

#include "battery_node_2.moc"
