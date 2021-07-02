#include <libfreenect2/libfreenect2.hpp>
#include <rclcpp/rclcpp.hpp>

...

class Kinect2 : ...
{
public:
  bool onNewFrame(...);

private:
  rclcpp::Publisher<...>::SharedPtr rgb_image_publisher;
  rclcpp::Publisher<...>::SharedPtr rgb_camera_info_publisher;

  rclcpp::Publisher<...>::SharedPtr depth_image_publisher;
  rclcpp::Publisher<...>::SharedPtr depth_camera_info_publisher;

  libfreenect2::Freenect2 freenect2;

  ...
};
