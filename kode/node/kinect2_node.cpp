#include <libfreenect2/libfreenect2.hpp>
#include <rclcpp/rclcpp.hpp>
...

class Kinect2 : ...
{
private:
  rclcpp::Publisher<...> rgb_image_publisher;
  rclcpp::Publisher<...> rgb_camera_info_publisher;

  rclcpp::Publisher<...> depth_image_publisher;
  rclcpp::Publisher<...> depth_camera_info_publisher;

  libfreenect2::Freenect2 freenect2;

  ...
};
