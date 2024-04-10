#include "robot_node.h"

RobotSub::RobotSub(const std::string& nodeName)
    : Node(nodeName)
{
    robot_sub_ = this->create_subscription<amr_v4_msgs_srvs::msg::Robot>(
        "test/robot", 10,
        std::bind(&RobotSub::topic_callback, this, std::placeholders::_1));

}

void RobotSub::topic_callback(const amr_v4_msgs_srvs::msg::Robot::SharedPtr msg)
{
    status = msg->robot_active_status.c_str();


    emit changedStatus(status);
}