// Generated by gencpp from file robotino_msgs/SetGrapplerAxis.msg
// DO NOT EDIT!


#ifndef ROBOTINO_MSGS_MESSAGE_SETGRAPPLERAXIS_H
#define ROBOTINO_MSGS_MESSAGE_SETGRAPPLERAXIS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotino_msgs
{
template <class ContainerAllocator>
struct SetGrapplerAxis_
{
  typedef SetGrapplerAxis_<ContainerAllocator> Type;

  SetGrapplerAxis_()
    : stamp()
    , axis(0)
    , angle(0.0)
    , velocity(0.0)  {
    }
  SetGrapplerAxis_(const ContainerAllocator& _alloc)
    : stamp()
    , axis(0)
    , angle(0.0)
    , velocity(0.0)  {
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef uint32_t _axis_type;
  _axis_type axis;

   typedef float _angle_type;
  _angle_type angle;

   typedef float _velocity_type;
  _velocity_type velocity;




  typedef boost::shared_ptr< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> const> ConstPtr;

}; // struct SetGrapplerAxis_

typedef ::robotino_msgs::SetGrapplerAxis_<std::allocator<void> > SetGrapplerAxis;

typedef boost::shared_ptr< ::robotino_msgs::SetGrapplerAxis > SetGrapplerAxisPtr;
typedef boost::shared_ptr< ::robotino_msgs::SetGrapplerAxis const> SetGrapplerAxisConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotino_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'robotino_msgs': ['/home/simon/catkin_ws/src/robotino-ros-pkg/robotino_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a709aba75be9516258888daf559c39d4";
  }

  static const char* value(const ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa709aba75be95162ULL;
  static const uint64_t static_value2 = 0x58888daf559c39d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotino_msgs/SetGrapplerAxis";
  }

  static const char* value(const ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n\
uint32 axis			# axis number (axes start from 0)\n\
float32 angle		# in degrees\n\
float32 velocity	# in rpm\n\
";
  }

  static const char* value(const ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.axis);
      stream.next(m.angle);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetGrapplerAxis_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotino_msgs::SetGrapplerAxis_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "axis: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.axis);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_SETGRAPPLERAXIS_H
