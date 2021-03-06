// Generated by gencpp from file ypspur_ros/DigitalOutput.msg
// DO NOT EDIT!


#ifndef YPSPUR_ROS_MESSAGE_DIGITALOUTPUT_H
#define YPSPUR_ROS_MESSAGE_DIGITALOUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ypspur_ros
{
template <class ContainerAllocator>
struct DigitalOutput_
{
  typedef DigitalOutput_<ContainerAllocator> Type;

  DigitalOutput_()
    : output(0)
    , toggle_time()  {
    }
  DigitalOutput_(const ContainerAllocator& _alloc)
    : output(0)
    , toggle_time()  {
  (void)_alloc;
    }



   typedef uint8_t _output_type;
  _output_type output;

   typedef ros::Duration _toggle_time_type;
  _toggle_time_type toggle_time;


    enum { HIGH_IMPEDANCE = 0u };
     enum { LOW = 1u };
     enum { HIGH = 2u };
     enum { PULL_UP = 3u };
     enum { PULL_DOWN = 4u };
 

  typedef boost::shared_ptr< ::ypspur_ros::DigitalOutput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ypspur_ros::DigitalOutput_<ContainerAllocator> const> ConstPtr;

}; // struct DigitalOutput_

typedef ::ypspur_ros::DigitalOutput_<std::allocator<void> > DigitalOutput;

typedef boost::shared_ptr< ::ypspur_ros::DigitalOutput > DigitalOutputPtr;
typedef boost::shared_ptr< ::ypspur_ros::DigitalOutput const> DigitalOutputConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ypspur_ros::DigitalOutput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ypspur_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'ypspur_ros': ['/home/cartis/workspace/catkin_ws/src/ypspur_ros/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ypspur_ros::DigitalOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ypspur_ros::DigitalOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ypspur_ros::DigitalOutput_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "019a9291acebccdd82910cc6e11634c7";
  }

  static const char* value(const ::ypspur_ros::DigitalOutput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x019a9291acebccddULL;
  static const uint64_t static_value2 = 0x82910cc6e11634c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ypspur_ros/DigitalOutput";
  }

  static const char* value(const ::ypspur_ros::DigitalOutput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 output\n\
duration toggle_time\n\
\n\
uint8 HIGH_IMPEDANCE=0\n\
uint8 LOW=1\n\
uint8 HIGH=2\n\
uint8 PULL_UP=3\n\
uint8 PULL_DOWN=4\n\
";
  }

  static const char* value(const ::ypspur_ros::DigitalOutput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
      stream.next(m.toggle_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DigitalOutput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ypspur_ros::DigitalOutput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ypspur_ros::DigitalOutput_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.output);
    s << indent << "toggle_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.toggle_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YPSPUR_ROS_MESSAGE_DIGITALOUTPUT_H
