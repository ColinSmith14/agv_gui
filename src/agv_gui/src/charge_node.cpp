#include "include/charge_node.hpp"

ChargeSub::ChargeSub()
    : Node("charge_sub")
{
    charge_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/charge", 10,
        std::bind(&ChargeSub::topic_callback, this, std::placeholders::_1));
}

void ChargeSub::topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
    charge = msg->data.c_str();

    RCLCPP_INFO(this->get_logger(), "Received temperature: %s", charge.toStdString().c_str());

    emit changedStatus(charge);
}

#include "charge_node.moc"
