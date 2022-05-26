// Generated by gencpp from file dobot/GetJOGJointParamsRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETJOGJOINTPARAMSREQUEST_H
#define DOBOT_MESSAGE_GETJOGJOINTPARAMSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot
{
template <class ContainerAllocator>
struct GetJOGJointParamsRequest_
{
  typedef GetJOGJointParamsRequest_<ContainerAllocator> Type;

  GetJOGJointParamsRequest_()
    {
    }
  GetJOGJointParamsRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetJOGJointParamsRequest_

typedef ::dobot::GetJOGJointParamsRequest_<std::allocator<void> > GetJOGJointParamsRequest;

typedef boost::shared_ptr< ::dobot::GetJOGJointParamsRequest > GetJOGJointParamsRequestPtr;
typedef boost::shared_ptr< ::dobot::GetJOGJointParamsRequest const> GetJOGJointParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::GetJOGJointParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetJOGJointParamsRequest";
  }

  static const char* value(const ::dobot::GetJOGJointParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::GetJOGJointParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJOGJointParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetJOGJointParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::GetJOGJointParamsRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETJOGJOINTPARAMSREQUEST_H