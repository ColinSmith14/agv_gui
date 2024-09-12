#ifndef BATTERY_NODE_H
#define BATTERY_NODE_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/bool.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "amr_v4_msgs_srvs/msg/motor.hpp"
#include "amr_v4_msgs_srvs/msg/pin.hpp"
#include "amr_v4_msgs_srvs/msg/mode.hpp"
#include "amr_v4_msgs_srvs/msg/robot.hpp"
#include "amr_v4_msgs_srvs/msg/error.hpp"
#include <QObject>
#include <QString>

using std::placeholders::_1;

class AmrNode : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    explicit AmrNode(const rclcpp::NodeOptions &options);

    void error_callback(const amr_v4_msgs_srvs::msg::Error::SharedPtr msg);
    void battery_callback(const sensor_msgs::msg::BatteryState::SharedPtr msg);
    void motor_callback(const amr_v4_msgs_srvs::msg::Motor::SharedPtr msg);
    void robot_callback(const amr_v4_msgs_srvs::msg::Robot::SharedPtr msg);
    void estop_callback(const std_msgs::msg::Bool::SharedPtr msg);
    void mode_callback(const bool msg);
    void pin_callback(const bool msg);

    bool slam_lidar;
    bool estop_lidar;
    bool camera;

    float voltage;
    float temperature;
    float current;
    float charge;
    float percentage;

    QString output_current_right;
    QString error_right;
    QString output_current_left;
    QString error_left;
    QString output_current_pin;
    QString error_pin;

    QString status;
    
    bool estop;



signals:
    void changedError(const bool slam_lidar,
                      const bool estop_lidar,
                      const bool camera);

    void changedBattery(const float voltage,
                        const float temperature,
                        const float current,
                        const float charge,
                        const float percentage);

    void changedMotor(const QString &output_current_right,
                      const QString &output_current_left,
                      const QString &output_current_pin,
                      const QString &error_right,
                      const QString &error_left,
                      const QString &error_pin);
    void changedRobot(const QString &data);
    void changedEstop(const bool &data);

private:
    rclcpp::Subscription<amr_v4_msgs_srvs::msg::Error>::SharedPtr error_sub_;
    rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
    rclcpp::Subscription<amr_v4_msgs_srvs::msg::Motor>::SharedPtr motor_sub_;
    rclcpp::Subscription<amr_v4_msgs_srvs::msg::Robot>::SharedPtr robot_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr estop_sub_;
    rclcpp::Publisher<amr_v4_msgs_srvs::msg::Mode>::SharedPtr mode_pub_;
    rclcpp::Publisher<amr_v4_msgs_srvs::msg::Pin>::SharedPtr pin_pub_;
};

#endif // BATTERY_NODE_H
