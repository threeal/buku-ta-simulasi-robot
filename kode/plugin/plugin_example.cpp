#include <gazebo/gazebo.hh>

namespace gazebo
{
  class MyModelPlugin : public ModelPlugin
  {
    public: MyModelPlugin() : ModelPlugin()
    {
      ...
    }

    public: void Load(physics::WorldPtr world, sdf::ElementPtr sdf)
    {
      ...
    }
  };

  GZ_REGISTER_WORLD_PLUGIN(MyModelPlugin)
}
