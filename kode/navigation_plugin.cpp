#include <gazebo/common/Plugin.hh>
#include <rclcpp/rclcpp.hpp>
...

namespace dienen_gazebo_plugins
{

class NavigationPlugin : public gazebo::ModelPlugin
{
public:
  ...

private:
  rclcpp::Node::SharedPtr node;

  rclcpp::Subscription<Twist>::SharedPtr twist_sub;
  rclcpp::Publisher<Odometry>::SharedPtr odometry_pub;

  ...
};

}  // namespace dienen_gazebo_plugins
