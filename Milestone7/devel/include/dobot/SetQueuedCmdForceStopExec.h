// Generated by gencpp from file dobot/SetQueuedCmdForceStopExec.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETQUEUEDCMDFORCESTOPEXEC_H
#define DOBOT_MESSAGE_SETQUEUEDCMDFORCESTOPEXEC_H

#include <ros/service_traits.h>


#include <dobot/SetQueuedCmdForceStopExecRequest.h>
#include <dobot/SetQueuedCmdForceStopExecResponse.h>


namespace dobot
{

struct SetQueuedCmdForceStopExec
{

typedef SetQueuedCmdForceStopExecRequest Request;
typedef SetQueuedCmdForceStopExecResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetQueuedCmdForceStopExec
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetQueuedCmdForceStopExec > {
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::dobot::SetQueuedCmdForceStopExec&) { return value(); }
};

template<>
struct DataType< ::dobot::SetQueuedCmdForceStopExec > {
  static const char* value()
  {
    return "dobot/SetQueuedCmdForceStopExec";
  }

  static const char* value(const ::dobot::SetQueuedCmdForceStopExec&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetQueuedCmdForceStopExecRequest> should match
// service_traits::MD5Sum< ::dobot::SetQueuedCmdForceStopExec >
template<>
struct MD5Sum< ::dobot::SetQueuedCmdForceStopExecRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetQueuedCmdForceStopExec >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdForceStopExecRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetQueuedCmdForceStopExecRequest> should match
// service_traits::DataType< ::dobot::SetQueuedCmdForceStopExec >
template<>
struct DataType< ::dobot::SetQueuedCmdForceStopExecRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetQueuedCmdForceStopExec >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdForceStopExecRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetQueuedCmdForceStopExecResponse> should match
// service_traits::MD5Sum< ::dobot::SetQueuedCmdForceStopExec >
template<>
struct MD5Sum< ::dobot::SetQueuedCmdForceStopExecResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetQueuedCmdForceStopExec >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdForceStopExecResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetQueuedCmdForceStopExecResponse> should match
// service_traits::DataType< ::dobot::SetQueuedCmdForceStopExec >
template<>
struct DataType< ::dobot::SetQueuedCmdForceStopExecResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetQueuedCmdForceStopExec >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdForceStopExecResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETQUEUEDCMDFORCESTOPEXEC_H
