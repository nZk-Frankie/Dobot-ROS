// Generated by gencpp from file dobot/GetPTPJointParamsRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETPTPJOINTPARAMSREQUEST_H
#define DOBOT_MESSAGE_GETPTPJOINTPARAMSREQUEST_H


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
struct GetPTPJointParamsRequest_
{
  typedef GetPTPJointParamsRequest_<ContainerAllocator> Type;

  GetPTPJointParamsRequest_()
    {
    }
  GetPTPJointParamsRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPTPJointParamsRequest_

typedef ::dobot::GetPTPJointParamsRequest_<std::allocator<void> > GetPTPJointParamsRequest;

typedef boost::shared_ptr< ::dobot::GetPTPJointParamsRequest > GetPTPJointParamsRequestPtr;
typedef boost::shared_ptr< ::dobot::GetPTPJointParamsRequest const> GetPTPJointParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::GetPTPJointParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetPTPJointParamsRequest";
  }

  static const char* value(const ::dobot::GetPTPJointParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::GetPTPJointParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPTPJointParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetPTPJointParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::GetPTPJointParamsRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETPTPJOINTPARAMSREQUEST_H
