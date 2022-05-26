// Generated by gencpp from file dobot/GetAlarmsState.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETALARMSSTATE_H
#define DOBOT_MESSAGE_GETALARMSSTATE_H

#include <ros/service_traits.h>


#include <dobot/GetAlarmsStateRequest.h>
#include <dobot/GetAlarmsStateResponse.h>


namespace dobot
{

struct GetAlarmsState
{

typedef GetAlarmsStateRequest Request;
typedef GetAlarmsStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetAlarmsState
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GetAlarmsState > {
  static const char* value()
  {
    return "471cc92db011a752d21793dfa031a894";
  }

  static const char* value(const ::dobot::GetAlarmsState&) { return value(); }
};

template<>
struct DataType< ::dobot::GetAlarmsState > {
  static const char* value()
  {
    return "dobot/GetAlarmsState";
  }

  static const char* value(const ::dobot::GetAlarmsState&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GetAlarmsStateRequest> should match
// service_traits::MD5Sum< ::dobot::GetAlarmsState >
template<>
struct MD5Sum< ::dobot::GetAlarmsStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetAlarmsState >::value();
  }
  static const char* value(const ::dobot::GetAlarmsStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetAlarmsStateRequest> should match
// service_traits::DataType< ::dobot::GetAlarmsState >
template<>
struct DataType< ::dobot::GetAlarmsStateRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GetAlarmsState >::value();
  }
  static const char* value(const ::dobot::GetAlarmsStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GetAlarmsStateResponse> should match
// service_traits::MD5Sum< ::dobot::GetAlarmsState >
template<>
struct MD5Sum< ::dobot::GetAlarmsStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetAlarmsState >::value();
  }
  static const char* value(const ::dobot::GetAlarmsStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetAlarmsStateResponse> should match
// service_traits::DataType< ::dobot::GetAlarmsState >
template<>
struct DataType< ::dobot::GetAlarmsStateResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GetAlarmsState >::value();
  }
  static const char* value(const ::dobot::GetAlarmsStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GETALARMSSTATE_H
