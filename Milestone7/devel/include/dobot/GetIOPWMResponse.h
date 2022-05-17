// Generated by gencpp from file dobot/GetIOPWMResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETIOPWMRESPONSE_H
#define DOBOT_MESSAGE_GETIOPWMRESPONSE_H


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
struct GetIOPWMResponse_
{
  typedef GetIOPWMResponse_<ContainerAllocator> Type;

  GetIOPWMResponse_()
    : result(0)
    , frequency(0.0)
    , dutyCycle(0.0)  {
    }
  GetIOPWMResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , frequency(0.0)
    , dutyCycle(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef float _frequency_type;
  _frequency_type frequency;

   typedef float _dutyCycle_type;
  _dutyCycle_type dutyCycle;





  typedef boost::shared_ptr< ::dobot::GetIOPWMResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetIOPWMResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetIOPWMResponse_

typedef ::dobot::GetIOPWMResponse_<std::allocator<void> > GetIOPWMResponse;

typedef boost::shared_ptr< ::dobot::GetIOPWMResponse > GetIOPWMResponsePtr;
typedef boost::shared_ptr< ::dobot::GetIOPWMResponse const> GetIOPWMResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetIOPWMResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetIOPWMResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::GetIOPWMResponse_<ContainerAllocator1> & lhs, const ::dobot::GetIOPWMResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.frequency == rhs.frequency &&
    lhs.dutyCycle == rhs.dutyCycle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::GetIOPWMResponse_<ContainerAllocator1> & lhs, const ::dobot::GetIOPWMResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetIOPWMResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetIOPWMResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIOPWMResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetIOPWMResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIOPWMResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetIOPWMResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetIOPWMResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "17a6ba166d1125f7c7225e13ea02a8e3";
  }

  static const char* value(const ::dobot::GetIOPWMResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x17a6ba166d1125f7ULL;
  static const uint64_t static_value2 = 0xc7225e13ea02a8e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetIOPWMResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetIOPWMResponse";
  }

  static const char* value(const ::dobot::GetIOPWMResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetIOPWMResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"float32 frequency\n"
"float32 dutyCycle\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetIOPWMResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetIOPWMResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.frequency);
      stream.next(m.dutyCycle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetIOPWMResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetIOPWMResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetIOPWMResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "frequency: ";
    Printer<float>::stream(s, indent + "  ", v.frequency);
    s << indent << "dutyCycle: ";
    Printer<float>::stream(s, indent + "  ", v.dutyCycle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETIOPWMRESPONSE_H