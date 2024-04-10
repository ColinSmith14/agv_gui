#ifndef MOTOR_NODE_H
#define MOTOR_NODE_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "amr_v4_msgs_srvs/msg/motor.hpp"
#include <QObject>

using std::placeholders::_1;

class MotorSub : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    explicit MotorSub(const std::string& nodeName);
    void motor_callback(const amr_v4_msgs_srvs::msg::Motor::SharedPtr msg);
    QString output_current_right;
    QString error_right;
    QString output_current_left;
    QString error_left;
    QString output_current_pin;
    QString error_pin;
    

signals:
    void changedMotor(const QString &output_current_right,
                      const QString &output_current_left,
                      const QString &output_current_pin,
                      const QString &error_right,
                      const QString &error_left,
                      const QString &error_pin);

private:
    rclcpp::Subscription<amr_v4_msgs_srvs::msg::Motor>::SharedPtr motor_sub_;
};

#endif // MOTOR_NODE_H
