// Generated by gencpp from file dobot/GetEndEffectorGripper.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETENDEFFECTORGRIPPER_H
#define DOBOT_MESSAGE_GETENDEFFECTORGRIPPER_H

#include <ros/service_traits.h>


#include <dobot/GetEndEffectorGripperRequest.h>
#include <dobot/GetEndEffectorGripperResponse.h>


namespace dobot
{

struct GetEndEffectorGripper
{

typedef GetEndEffectorGripperRequest Request;
typedef GetEndEffectorGripperResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetEndEffectorGripper
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GetEndEffectorGripper > {
  static const char* value()
  {
    return "4185902cfc52c9751c7305887881349c";
  }

  static const char* value(const ::dobot::GetEndEffectorGripper&) { return value(); }
};

template<>
struct DataType< ::dobot::GetEndEffectorGripper > {
  static const char* value()
  {
    return "dobot/GetEndEffectorGripper";
  }

  static const char* value(const ::dobot::GetEndEffectorGripper&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GetEndEffectorGripperRequest> should match
// service_traits::MD5Sum< ::dobot::GetEndEffectorGripper >
template<>
struct MD5Sum< ::dobot::GetEndEffectorGripperRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetEndEffectorGripper >::value();
  }
  static const char* value(const ::dobot::GetEndEffectorGripperRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetEndEffectorGripperRequest> should match
// service_traits::DataType< ::dobot::GetEndEffectorGripper >
template<>
struct DataType< ::dobot::GetEndEffectorGripperRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GetEndEffectorGripper >::value();
  }
  static const char* value(const ::dobot::GetEndEffectorGripperRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GetEndEffectorGripperResponse> should match
// service_traits::MD5Sum< ::dobot::GetEndEffectorGripper >
template<>
struct MD5Sum< ::dobot::GetEndEffectorGripperResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetEndEffectorGripper >::value();
  }
  static const char* value(const ::dobot::GetEndEffectorGripperResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetEndEffectorGripperResponse> should match
// service_traits::DataType< ::dobot::GetEndEffectorGripper >
template<>
struct DataType< ::dobot::GetEndEffectorGripperResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GetEndEffectorGripper >::value();
  }
  static const char* value(const ::dobot::GetEndEffectorGripperResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GETENDEFFECTORGRIPPER_H
