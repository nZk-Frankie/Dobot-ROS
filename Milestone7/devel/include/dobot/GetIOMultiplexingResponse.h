// Generated by gencpp from file dobot/GetIOMultiplexingResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETIOMULTIPLEXINGRESPONSE_H
#define DOBOT_MESSAGE_GETIOMULTIPLEXINGRESPONSE_H


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
struct GetIOMultiplexingResponse_
{
  typedef GetIOMultiplexingResponse_<ContainerAllocator> Type;

  GetIOMultiplexingResponse_()
    : result(0)
    , multiplex(0)  {
    }
  GetIOMultiplexingResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , multiplex(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef uint8_t _multiplex_type;
  _multiplex_type multiplex;





  typedef boost::shared_ptr< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetIOMultiplexingResponse_

typedef ::dobot::GetIOMultiplexingResponse_<std::allocator<void> > GetIOMultiplexingResponse;

typedef boost::shared_ptr< ::dobot::GetIOMultiplexingResponse > GetIOMultiplexingResponsePtr;
typedef boost::shared_ptr< ::dobot::GetIOMultiplexingResponse const> GetIOMultiplexingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator1> & lhs, const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.multiplex == rhs.multiplex;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator1> & lhs, const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "61bdcf53e1dc8779bd7c79b4dc9c2aa4";
  }

  static const char* value(const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x61bdcf53e1dc8779ULL;
  static const uint64_t static_value2 = 0xbd7c79b4dc9c2aa4ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetIOMultiplexingResponse";
  }

  static const char* value(const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"uint8 multiplex\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.multiplex);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetIOMultiplexingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetIOMultiplexingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetIOMultiplexingResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "multiplex: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.multiplex);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETIOMULTIPLEXINGRESPONSE_H
