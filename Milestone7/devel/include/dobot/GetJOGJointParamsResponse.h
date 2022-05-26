// Generated by gencpp from file dobot/GetJOGJointParamsResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETJOGJOINTPARAMSRESPONSE_H
#define DOBOT_MESSAGE_GETJOGJOINTPARAMSRESPONSE_H


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
struct GetJOGJointParamsResponse_
{
  typedef GetJOGJointParamsResponse_<ContainerAllocator> Type;

  GetJOGJointParamsResponse_()
    : result(0)
    , velocity()
    , acceleration()  {
    }
  GetJOGJointParamsResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , velocity(_alloc)
    , acceleration(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _acceleration_type;
  _acceleration_type acceleration;





  typedef boost::shared_ptr< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetJOGJointParamsResponse_

typedef ::dobot::GetJOGJointParamsResponse_<std::allocator<void> > GetJOGJointParamsResponse;

typedef boost::shared_ptr< ::dobot::GetJOGJointParamsResponse > GetJOGJointParamsResponsePtr;
typedef boost::shared_ptr< ::dobot::GetJOGJointParamsResponse const> GetJOGJointParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator1> & lhs, const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.velocity == rhs.velocity &&
    lhs.acceleration == rhs.acceleration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator1> & lhs, const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "46bf5bf78db0edaa99dd346e0307937e";
  }

  static const char* value(const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x46bf5bf78db0edaaULL;
  static const uint64_t static_value2 = 0x99dd346e0307937eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetJOGJointParamsResponse";
  }

  static const char* value(const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"float32[] velocity\n"
"float32[] acceleration\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.velocity);
      stream.next(m.acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJOGJointParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetJOGJointParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetJOGJointParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "acceleration[]" << std::endl;
    for (size_t i = 0; i < v.acceleration.size(); ++i)
    {
      s << indent << "  acceleration[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.acceleration[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETJOGJOINTPARAMSRESPONSE_H
