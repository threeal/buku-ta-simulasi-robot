#include <gazebo/common/Plugin.hh>
#include <rclcpp/rclcpp.hpp>
...

namespace dienen_gazebo_plugins
{

class NavigationPlugin : public gazebo::ModelPlugin
{
private:
  rclcpp::Node::SharedPtr node;

  rclcpp::Publisher<Odometry>::SharedPtr odometry_pub;
  rclcpp::Subscription<Twist>::SharedPtr twist_sub;

  ...
};

}  // namespace dienen_gazebo_plugins
