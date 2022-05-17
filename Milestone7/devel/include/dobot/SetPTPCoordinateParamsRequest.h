// Generated by gencpp from file dobot/SetPTPCoordinateParamsRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETPTPCOORDINATEPARAMSREQUEST_H
#define DOBOT_MESSAGE_SETPTPCOORDINATEPARAMSREQUEST_H


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
struct SetPTPCoordinateParamsRequest_
{
  typedef SetPTPCoordinateParamsRequest_<ContainerAllocator> Type;

  SetPTPCoordinateParamsRequest_()
    : xyzVelocity(0.0)
    , rVelocity(0.0)
    , xyzAcceleration(0.0)
    , rAcceleration(0.0)
    , isQueued(false)  {
    }
  SetPTPCoordinateParamsRequest_(const ContainerAllocator& _alloc)
    : xyzVelocity(0.0)
    , rVelocity(0.0)
    , xyzAcceleration(0.0)
    , rAcceleration(0.0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef float _xyzVelocity_type;
  _xyzVelocity_type xyzVelocity;

   typedef float _rVelocity_type;
  _rVelocity_type rVelocity;

   typedef float _xyzAcceleration_type;
  _xyzAcceleration_type xyzAcceleration;

   typedef float _rAcceleration_type;
  _rAcceleration_type rAcceleration;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPTPCoordinateParamsRequest_

typedef ::dobot::SetPTPCoordinateParamsRequest_<std::allocator<void> > SetPTPCoordinateParamsRequest;

typedef boost::shared_ptr< ::dobot::SetPTPCoordinateParamsRequest > SetPTPCoordinateParamsRequestPtr;
typedef boost::shared_ptr< ::dobot::SetPTPCoordinateParamsRequest const> SetPTPCoordinateParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator1> & lhs, const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.xyzVelocity == rhs.xyzVelocity &&
    lhs.rVelocity == rhs.rVelocity &&
    lhs.xyzAcceleration == rhs.xyzAcceleration &&
    lhs.rAcceleration == rhs.rAcceleration &&
    lhs.isQueued == rhs.isQueued;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator1> & lhs, const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "76117133666c08ba06a7aa5aebab19f5";
  }

  static const char* value(const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x76117133666c08baULL;
  static const uint64_t static_value2 = 0x06a7aa5aebab19f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetPTPCoordinateParamsRequest";
  }

  static const char* value(const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 xyzVelocity\n"
"float32 rVelocity\n"
"float32 xyzAcceleration\n"
"float32 rAcceleration\n"
"bool isQueued\n"
;
  }

  static const char* value(const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.xyzVelocity);
      stream.next(m.rVelocity);
      stream.next(m.xyzAcceleration);
      stream.next(m.rAcceleration);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPTPCoordinateParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetPTPCoordinateParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "xyzVelocity: ";
    Printer<float>::stream(s, indent + "  ", v.xyzVelocity);
    s << indent << "rVelocity: ";
    Printer<float>::stream(s, indent + "  ", v.rVelocity);
    s << indent << "xyzAcceleration: ";
    Printer<float>::stream(s, indent + "  ", v.xyzAcceleration);
    s << indent << "rAcceleration: ";
    Printer<float>::stream(s, indent + "  ", v.rAcceleration);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETPTPCOORDINATEPARAMSREQUEST_H
