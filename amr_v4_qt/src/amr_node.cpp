#include "amr_node.h"
#include <QDebug>

AmrNode::AmrNode(const rclcpp::NodeOptions &options)
    : rclcpp::Node("amr_node", options)
{

    lidar_sub_ = this->create_subscription<std_msgs::msg::Bool>(
            "Hesai", 10,
            std::bind(&AmrNode::lidar_callback, this, std::placeholders::_1));
    
    lidar2_sub_ = this->create_subscription<std_msgs::msg::Bool>(
            "Sick", 10,
            std::bind(&AmrNode::lidar2_callback, this, std::placeholders::_1));
    camera_sub_ = this->create_subscription<std_msgs::msg::Bool>(
            "camera", 10,
            std::bind(&AmrNode::camera_callback, this, std::placeholders::_1));

    battery_sub_ = this->create_subscription<sensor_msgs::msg::BatteryState>(
            "battery_state", 10,
            std::bind(&AmrNode::battery_callback, this, std::placeholders::_1));

    motor_sub_ = this->create_subscription<amr_v4_msgs_srvs::msg::Motor>(
            "talonFX_motors/status", 10,
            std::bind(&AmrNode::motor_callback, this, std::placeholders::_1));

    robot_sub_ = this->create_subscription<amr_v4_msgs_srvs::msg::Robot>(
            "diagnostic", 10,
            std::bind(&AmrNode::robot_callback, this, std::placeholders::_1));

    estop_sub_ = this->create_subscription<std_msgs::msg::Bool>(
            "e_stop", 10,
            std::bind(&AmrNode::estop_callback, this, std::placeholders::_1));
        
    mode_pub_ = this->create_publisher<amr_v4_msgs_srvs::msg::Mode>("mode", 10);

    pin_pub_ = this->create_publisher<amr_v4_msgs_srvs::msg::Pin>("pin_cmd", 10);
}

void AmrNode::camera_callback(const std_msgs::msg::Bool::SharedPtr msg)
{
    camera_info = msg->data;
    emit changedCamera(camera_info);    
}

void AmrNode::lidar_callback(const std_msgs::msg::Bool::SharedPtr msg)
{
    lidar_info = msg->data;
    emit changedLidar(lidar_info);
}
void AmrNode::lidar2_callback(const std_msgs::msg::Bool::SharedPtr msg)
{
    lidar2_info = msg->data;
    emit changedLidar2(lidar2_info);
}
void AmrNode::battery_callback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
{
    charge = msg->charge;
    percentage = msg->percentage;
    voltage = msg->voltage;
    current = msg->current;
    temperature = msg->temperature;

    emit changedBattery(voltage, temperature, current, charge, percentage);
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

void AmrNode::robot_callback(const amr_v4_msgs_srvs::msg::Robot::SharedPtr msg)
{
    status = msg->robot_localization_status.c_str();
    emit changedRobot(status);
}

void AmrNode::estop_callback(const std_msgs::msg::Bool::SharedPtr msg)
{
    estop = msg->data;
    emit changedEstop(estop);
}

void AmrNode::mode_callback(const bool msg)
{
    auto message = amr_v4_msgs_srvs::msg::Mode();
    message.mode = msg;
    mode_pub_->publish(message);
}

void AmrNode::pin_callback(const bool msg)
{
    auto message = amr_v4_msgs_srvs::msg::Pin();
    message.pin_command = msg;
    pin_pub_->publish(message);
}
