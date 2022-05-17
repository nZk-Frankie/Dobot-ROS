// Generated by gencpp from file dobot/SetInfraredSensorRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETINFRAREDSENSORREQUEST_H
#define DOBOT_MESSAGE_SETINFRAREDSENSORREQUEST_H


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
struct SetInfraredSensorRequest_
{
  typedef SetInfraredSensorRequest_<ContainerAllocator> Type;

  SetInfraredSensorRequest_()
    : enableCtrl(false)
    , infraredPort(0)  {
    }
  SetInfraredSensorRequest_(const ContainerAllocator& _alloc)
    : enableCtrl(false)
    , infraredPort(0)  {
  (void)_alloc;
    }



   typedef uint8_t _enableCtrl_type;
  _enableCtrl_type enableCtrl;

   typedef int32_t _infraredPort_type;
  _infraredPort_type infraredPort;





  typedef boost::shared_ptr< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetInfraredSensorRequest_

typedef ::dobot::SetInfraredSensorRequest_<std::allocator<void> > SetInfraredSensorRequest;

typedef boost::shared_ptr< ::dobot::SetInfraredSensorRequest > SetInfraredSensorRequestPtr;
typedef boost::shared_ptr< ::dobot::SetInfraredSensorRequest const> SetInfraredSensorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetInfraredSensorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::SetInfraredSensorRequest_<ContainerAllocator1> & lhs, const ::dobot::SetInfraredSensorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.enableCtrl == rhs.enableCtrl &&
    lhs.infraredPort == rhs.infraredPort;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::SetInfraredSensorRequest_<ContainerAllocator1> & lhs, const ::dobot::SetInfraredSensorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ee50472b9b04984b8898d394e288d4fa";
  }

  static const char* value(const ::dobot::SetInfraredSensorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xee50472b9b04984bULL;
  static const uint64_t static_value2 = 0x8898d394e288d4faULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetInfraredSensorRequest";
  }

  static const char* value(const ::dobot::SetInfraredSensorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool enableCtrl\n"
"int32 infraredPort\n"
;
  }

  static const char* value(const ::dobot::SetInfraredSensorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enableCtrl);
      stream.next(m.infraredPort);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetInfraredSensorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetInfraredSensorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetInfraredSensorRequest_<ContainerAllocator>& v)
  {
    s << indent << "enableCtrl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enableCtrl);
    s << indent << "infraredPort: ";
    Printer<int32_t>::stream(s, indent + "  ", v.infraredPort);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETINFRAREDSENSORREQUEST_H
