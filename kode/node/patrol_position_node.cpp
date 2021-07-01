#include <rclcpp/rclcpp.hpp>

...

int main(int argc, char ** argv)
{
  ...

  rclcpp::init(argc, argv);

  auto node = ...;
  auto odometry_subscription = ...;
  auto twist_publisher = ...;

  auto update_timer = node->create_wall_timer(
    10ms, [&]() {
      ...
    });

  rclcpp::spin(node);

  ...
}
