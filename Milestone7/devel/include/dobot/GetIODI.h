// Generated by gencpp from file dobot/GetIODI.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETIODI_H
#define DOBOT_MESSAGE_GETIODI_H

#include <ros/service_traits.h>


#include <dobot/GetIODIRequest.h>
#include <dobot/GetIODIResponse.h>


namespace dobot
{

struct GetIODI
{

typedef GetIODIRequest Request;
typedef GetIODIResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetIODI
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GetIODI > {
  static const char* value()
  {
    return "658a016d9c03f31ccbdb869e836cf420";
  }

  static const char* value(const ::dobot::GetIODI&) { return value(); }
};

template<>
struct DataType< ::dobot::GetIODI > {
  static const char* value()
  {
    return "dobot/GetIODI";
  }

  static const char* value(const ::dobot::GetIODI&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GetIODIRequest> should match
// service_traits::MD5Sum< ::dobot::GetIODI >
template<>
struct MD5Sum< ::dobot::GetIODIRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetIODI >::value();
  }
  static const char* value(const ::dobot::GetIODIRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetIODIRequest> should match
// service_traits::DataType< ::dobot::GetIODI >
template<>
struct DataType< ::dobot::GetIODIRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GetIODI >::value();
  }
  static const char* value(const ::dobot::GetIODIRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GetIODIResponse> should match
// service_traits::MD5Sum< ::dobot::GetIODI >
template<>
struct MD5Sum< ::dobot::GetIODIResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetIODI >::value();
  }
  static const char* value(const ::dobot::GetIODIResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetIODIResponse> should match
// service_traits::DataType< ::dobot::GetIODI >
template<>
struct DataType< ::dobot::GetIODIResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GetIODI >::value();
  }
  static const char* value(const ::dobot::GetIODIResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GETIODI_H
