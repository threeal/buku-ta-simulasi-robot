#include <rclcpp/rclcpp.hpp>

...

int main(int argc, char ** argv)
{
  ...

  rclcpp::init(argc, argv);

  auto node = ...;
  auto twist_publisher = ...;
  auto update_process = ...;

  // Update process
  if (use_sim_time) {
    auto clock_subscription = ...;
    rclcpp::spin(node);
  } else {
    auto update_timer = ...;
    rclcpp::spin(node);
  }

  ...
}
