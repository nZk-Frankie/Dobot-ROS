// Generated by gencpp from file dobot/GetJOGCoordinateParams.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETJOGCOORDINATEPARAMS_H
#define DOBOT_MESSAGE_GETJOGCOORDINATEPARAMS_H

#include <ros/service_traits.h>


#include <dobot/GetJOGCoordinateParamsRequest.h>
#include <dobot/GetJOGCoordinateParamsResponse.h>


namespace dobot
{

struct GetJOGCoordinateParams
{

typedef GetJOGCoordinateParamsRequest Request;
typedef GetJOGCoordinateParamsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetJOGCoordinateParams
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GetJOGCoordinateParams > {
  static const char* value()
  {
    return "46bf5bf78db0edaa99dd346e0307937e";
  }

  static const char* value(const ::dobot::GetJOGCoordinateParams&) { return value(); }
};

template<>
struct DataType< ::dobot::GetJOGCoordinateParams > {
  static const char* value()
  {
    return "dobot/GetJOGCoordinateParams";
  }

  static const char* value(const ::dobot::GetJOGCoordinateParams&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GetJOGCoordinateParamsRequest> should match
// service_traits::MD5Sum< ::dobot::GetJOGCoordinateParams >
template<>
struct MD5Sum< ::dobot::GetJOGCoordinateParamsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetJOGCoordinateParams >::value();
  }
  static const char* value(const ::dobot::GetJOGCoordinateParamsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetJOGCoordinateParamsRequest> should match
// service_traits::DataType< ::dobot::GetJOGCoordinateParams >
template<>
struct DataType< ::dobot::GetJOGCoordinateParamsRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GetJOGCoordinateParams >::value();
  }
  static const char* value(const ::dobot::GetJOGCoordinateParamsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GetJOGCoordinateParamsResponse> should match
// service_traits::MD5Sum< ::dobot::GetJOGCoordinateParams >
template<>
struct MD5Sum< ::dobot::GetJOGCoordinateParamsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetJOGCoordinateParams >::value();
  }
  static const char* value(const ::dobot::GetJOGCoordinateParamsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetJOGCoordinateParamsResponse> should match
// service_traits::DataType< ::dobot::GetJOGCoordinateParams >
template<>
struct DataType< ::dobot::GetJOGCoordinateParamsResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GetJOGCoordinateParams >::value();
  }
  static const char* value(const ::dobot::GetJOGCoordinateParamsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GETJOGCOORDINATEPARAMS_H
