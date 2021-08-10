#include <beine_cpp/beine_cpp.hpp>
#include <rclcpp/rclcpp.hpp>

...

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  auto node = ...;
  auto legs_provider = ...;

  auto update_timer = node->create_wall_timer(
    100ms, [&]() {
      ...
    });

  rclcpp::spin(node);
  rclcpp::shutdown();
}
