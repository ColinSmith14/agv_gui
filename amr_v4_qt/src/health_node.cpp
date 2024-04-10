#include "health_node.h"

HealthSub::HealthSub(const std::string& nodeName)
    : Node(nodeName)
{
    camera_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/camera", 10,
        std::bind(&HealthSub::camera_callback, this, std::placeholders::_1));

    lidar_sub_ = this->create_subscription<std_msgs::msg::String>(
        "test/lidar", 10,
        std::bind(&HealthSub::lidar_callback, this, std::placeholders::_1));
}

void HealthSub::camera_callback(const std_msgs::msg::String::SharedPtr msg)
{
    camera_info = msg->data.c_str();

    //RCLCPP_INFO(this->get_logger(), "Received camera: ", camera_info.toStdString().c_str());

    emit changedCamera(camera_info);
}
void HealthSub::lidar_callback(const std_msgs::msg::String::SharedPtr msg)
{
    lidar_info = msg->data.c_str();

    //RCLCPP_INFO(this->get_logger(), "Received lidar: ", lidar_info.toStdString().c_str());

    emit changedLidar(lidar_info);
}