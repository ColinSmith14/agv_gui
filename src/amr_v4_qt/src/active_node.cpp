#include "active_node.h"

ActiveSub::ActiveSub(const std::string& nodeName)
    : Node(nodeName)
{
    active_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/active", 10,
        std::bind(&ActiveSub::topic_callback, this, std::placeholders::_1));
}

void ActiveSub::topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
    status = msg->data.c_str();

    // RCLCPP_INFO(this->get_logger(), "Received charge: %s", charge.toStdString().c_str());

    emit changedStatus(status);
}