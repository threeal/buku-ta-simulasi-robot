#include <rclcpp/rclcpp.hpp>
#include <tosshin/tosshin.hpp>

...

class Navigation : public rclcpp::Node
{
private:
  void listen_process();
  void broadcast_process();

  rclcpp::Subscription<tosshin::msg::Twist>::SharedPtr twist_subscription;
  rclcpp::Publisher<tosshin::msg::Odometry>::SharedPtr odometry_publisher;

  rclcpp::TimerBase::SharedPtr update_timer;

  ...
};
