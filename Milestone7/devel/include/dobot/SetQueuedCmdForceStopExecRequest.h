// Generated by gencpp from file dobot/SetQueuedCmdForceStopExecRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETQUEUEDCMDFORCESTOPEXECREQUEST_H
#define DOBOT_MESSAGE_SETQUEUEDCMDFORCESTOPEXECREQUEST_H


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
struct SetQueuedCmdForceStopExecRequest_
{
  typedef SetQueuedCmdForceStopExecRequest_<ContainerAllocator> Type;

  SetQueuedCmdForceStopExecRequest_()
    {
    }
  SetQueuedCmdForceStopExecRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetQueuedCmdForceStopExecRequest_

typedef ::dobot::SetQueuedCmdForceStopExecRequest_<std::allocator<void> > SetQueuedCmdForceStopExecRequest;

typedef boost::shared_ptr< ::dobot::SetQueuedCmdForceStopExecRequest > SetQueuedCmdForceStopExecRequestPtr;
typedef boost::shared_ptr< ::dobot::SetQueuedCmdForceStopExecRequest const> SetQueuedCmdForceStopExecRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetQueuedCmdForceStopExecRequest";
  }

  static const char* value(const ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetQueuedCmdForceStopExecRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::SetQueuedCmdForceStopExecRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETQUEUEDCMDFORCESTOPEXECREQUEST_H
