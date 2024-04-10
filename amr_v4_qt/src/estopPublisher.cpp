#include "estop_publisher.h"

EstopPublisher::EstopPublisher() : Node("estop_publisher") {
    estop_publisher_ = this->create_publisher<std_msgs::msg::String>("estop_status", 10);

}