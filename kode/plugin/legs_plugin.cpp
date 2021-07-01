#include <beine_cpp/beine_cpp.hpp>
#include <gazebo/common/Plugin.hh>
#include <rclcpp/rclcpp.hpp>

...

namespace beine_gazebo_plugins
{

...

class LegsPlugin : public gazebo::ModelPlugin
{
public:
  LegsPlugin();

  ...

private:
  rclcpp::Node::SharedPtr node;

  std::shared_ptr<beine_cpp::LegsConsumer> legs_consumer;

  ...
};

}  // namespace beine_gazebo_plugins
