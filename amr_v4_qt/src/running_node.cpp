#include "running_node.h"

RunningSub::RunningSub(const std::string& nodeName)
    : Node(nodeName)
{
    mode_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/running_mode", 10,
        std::bind(&RunningSub::mode_callback, this, std::placeholders::_1));
}

void RunningSub::mode_callback(const std_msgs::msg::String::SharedPtr msg)
{
    mode = msg->data.c_str();

    //RCLCPP_INFO(this->get_logger(), "Received mode: ", mode.toStdString().c_str());

    emit changedMode(mode);
}