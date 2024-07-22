#ifndef BATTERY_NODE_H
#define BATTERY_NODE_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/bool.hpp"
#include "amr_v4_msgs_srvs/msg/motor.hpp"
#include "amr_v4_msgs_srvs/msg/pin.hpp"
#include <QObject>
#include <QString>

using std::placeholders::_1;

class AmrNode : public QObject, public rclcpp::Node
{
    Q_OBJECT

public:
    explicit AmrNode(const rclcpp::NodeOptions &options);

    void lidar_callback(const std_msgs::msg::Bool::SharedPtr msg);
    void lidar2_callback(const std_msgs::msg::Bool::SharedPtr msg);
    void camera_callback(const std_msgs::msg::Bool::SharedPtr msg);
    void battery_callback(const std_msgs::msg::String::SharedPtr msg);
    void motor_callback(const amr_v4_msgs_srvs::msg::Motor::SharedPtr msg);
    void robot_callback(const std_msgs::msg::String::SharedPtr msg);
    void estop_callback(const std_msgs::msg::Bool::SharedPtr msg);
    void mode_callback(const bool msg);
    void pin_callback(const bool msg);

    QString charge;
    QString output_current_right;
    QString error_right;
    QString output_current_left;
    QString error_left;
    QString output_current_pin;
    QString error_pin;
    QString status;
    
    bool estop;
    int driveMode;
    bool camera_info;
    bool lidar_info; // sick lidar
    bool lidar2_info; // hesai lidar



signals:
    void changedCamera(const bool &data);
    void changedLidar(const bool &data);
    void changedLidar2(const bool &data);
    void changedBattery(const QString &data);
    void changedMotor(const QString &output_current_right,
                      const QString &output_current_left,
                      const QString &output_current_pin,
                      const QString &error_right,
                      const QString &error_left,
                      const QString &error_pin);
    void changedRobot(const QString &data);
    void changedEstop(const bool &data);

private:
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr lidar_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr lidar2_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr camera_sub_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr battery_sub_;
    rclcpp::Subscription<amr_v4_msgs_srvs::msg::Motor>::SharedPtr motor_sub_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr robot_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr estop_sub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr mode_pub_;
    rclcpp::Publisher<amr_v4_msgs_srvs::msg::Pin>::SharedPtr pin_pub_;
};

#endif // BATTERY_NODE_H
