#include "motor_node.h"

MotorSub::MotorSub(const std::string& nodeName)
    : Node(nodeName)
{
    motor_sub_ = this->create_subscription<amr_v4_msgs_srvs::msg::Motor>(
        "test/motor", 10,
        std::bind(&MotorSub::motor_callback, this, std::placeholders::_1));

}

void MotorSub::motor_callback(const amr_v4_msgs_srvs::msg::Motor::SharedPtr msg)
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
