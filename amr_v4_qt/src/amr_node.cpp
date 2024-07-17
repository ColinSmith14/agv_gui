#include "amr_node.h"

AmrNode::AmrNode(const rclcpp::NodeOptions &options)
    : rclcpp::Node("amr_node", options)
{
    driveMode = true; 

    lidar_sub_ = this->create_subscription<std_msgs::msg::String>(
            "lidar", 10,
            std::bind(&AmrNode::lidar_callback, this, std::placeholders::_1));
    camera_sub_ = this->create_subscription<std_msgs::msg::String>(
            "camera", 10,
            std::bind(&AmrNode::camera_callback, this, std::placeholders::_1));

    battery_sub_ = this->create_subscription<std_msgs::msg::String>(
            "battery", 10,
            std::bind(&AmrNode::battery_callback, this, std::placeholders::_1));

    motor_sub_ = this->create_subscription<amr_v4_msgs_srvs::msg::Motor>(
            "TalonFX_motor/status", 10,
            std::bind(&AmrNode::motor_callback, this, std::placeholders::_1));

    robot_sub_ = this->create_subscription<std_msgs::msg::String>(
            "robot", 10,
            std::bind(&AmrNode::robot_callback, this, std::placeholders::_1));

    estop_sub_ = this->create_subscription<std_msgs::msg::Bool>(
        "estop", 10,
        std::bind(&AmrNode::estop_callback, this, std::placeholders::_1));
        
    mode_pub_ = this->create_publisher<std_msgs::msg::Bool>("mode", 10);

}

void AmrNode::camera_callback(const std_msgs::msg::String::SharedPtr msg)
{
     camera_info = msg->data.c_str();
    emit changedCamera(camera_info);
}

void AmrNode::lidar_callback(const std_msgs::msg::String::SharedPtr msg)
{
    lidar_info = msg->data.c_str();
    emit changedLidar(lidar_info);
}

void AmrNode::battery_callback(const std_msgs::msg::String::SharedPtr msg)
{
    charge = msg->data.c_str();
    emit changedBattery(charge);
}

void AmrNode::motor_callback(const amr_v4_msgs_srvs::msg::Motor::SharedPtr msg)
{
    output_current_right = msg->output_current_right.c_str();
    output_current_left = msg->output_current_left.c_str();
    output_current_pin = msg->output_current_pin.c_str();
    error_right = msg->error_right.c_str();
    error_left = msg->error_left.c_str();
    error_pin = msg->error_pin.c_str();

    emit changedMotor(output_current_right, output_current_left, output_current_pin,
    error_right, error_left, error_pin);
}

void AmrNode::robot_callback(const std_msgs::msg::String::SharedPtr msg)
{
    status = msg->data.c_str();
    emit changedRobot(status);
}

void AmrNode::estop_callback(const std_msgs::msg::Bool::SharedPtr msg)
{
    estop = msg->data;
    emit changedEstop(estop);
}

void AmrNode::mode_callback(const bool msg)
{
    auto message = std_msgs::msg::Bool();
    message.data = msg;
    mode_pub_->publish(message);
}
