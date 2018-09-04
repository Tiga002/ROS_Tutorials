// Generated by gencpp from file tutorials/mySRVResponse.msg
// DO NOT EDIT!


#ifndef TUTORIALS_MESSAGE_MYSRVRESPONSE_H
#define TUTORIALS_MESSAGE_MYSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tutorials
{
template <class ContainerAllocator>
struct mySRVResponse_
{
  typedef mySRVResponse_<ContainerAllocator> Type;

  mySRVResponse_()
    : sum(0)  {
    }
  mySRVResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int64_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::tutorials::mySRVResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tutorials::mySRVResponse_<ContainerAllocator> const> ConstPtr;

}; // struct mySRVResponse_

typedef ::tutorials::mySRVResponse_<std::allocator<void> > mySRVResponse;

typedef boost::shared_ptr< ::tutorials::mySRVResponse > mySRVResponsePtr;
typedef boost::shared_ptr< ::tutorials::mySRVResponse const> mySRVResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tutorials::mySRVResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tutorials::mySRVResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'tutorials': ['/home/SENSETIME/leunghoyin/Documents/ROS_Tutorials/catkin_ws/src/tutorials/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tutorials::mySRVResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tutorials::mySRVResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tutorials::mySRVResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tutorials::mySRVResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tutorials::mySRVResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tutorials::mySRVResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tutorials::mySRVResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b88405221c77b1878a3cbbfff53428d7";
  }

  static const char* value(const ::tutorials::mySRVResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb88405221c77b187ULL;
  static const uint64_t static_value2 = 0x8a3cbbfff53428d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::tutorials::mySRVResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tutorials/mySRVResponse";
  }

  static const char* value(const ::tutorials::mySRVResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tutorials::mySRVResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 sum\n\
\n\
";
  }

  static const char* value(const ::tutorials::mySRVResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tutorials::mySRVResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mySRVResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tutorials::mySRVResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tutorials::mySRVResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int64_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUTORIALS_MESSAGE_MYSRVRESPONSE_H
