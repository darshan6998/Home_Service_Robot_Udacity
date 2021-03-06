// Generated by gencpp from file map_msgs/ProjectedMapsInfo.msg
// DO NOT EDIT!


#ifndef MAP_MSGS_MESSAGE_PROJECTEDMAPSINFO_H
#define MAP_MSGS_MESSAGE_PROJECTEDMAPSINFO_H

#include <ros/service_traits.h>


#include <map_msgs/ProjectedMapsInfoRequest.h>
#include <map_msgs/ProjectedMapsInfoResponse.h>


namespace map_msgs
{

struct ProjectedMapsInfo
{

typedef ProjectedMapsInfoRequest Request;
typedef ProjectedMapsInfoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ProjectedMapsInfo
} // namespace map_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::map_msgs::ProjectedMapsInfo > {
  static const char* value()
  {
    return "d7980a33202421c8cd74565e57a4d229";
  }

  static const char* value(const ::map_msgs::ProjectedMapsInfo&) { return value(); }
};

template<>
struct DataType< ::map_msgs::ProjectedMapsInfo > {
  static const char* value()
  {
    return "map_msgs/ProjectedMapsInfo";
  }

  static const char* value(const ::map_msgs::ProjectedMapsInfo&) { return value(); }
};


// service_traits::MD5Sum< ::map_msgs::ProjectedMapsInfoRequest> should match 
// service_traits::MD5Sum< ::map_msgs::ProjectedMapsInfo > 
template<>
struct MD5Sum< ::map_msgs::ProjectedMapsInfoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::map_msgs::ProjectedMapsInfo >::value();
  }
  static const char* value(const ::map_msgs::ProjectedMapsInfoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::map_msgs::ProjectedMapsInfoRequest> should match 
// service_traits::DataType< ::map_msgs::ProjectedMapsInfo > 
template<>
struct DataType< ::map_msgs::ProjectedMapsInfoRequest>
{
  static const char* value()
  {
    return DataType< ::map_msgs::ProjectedMapsInfo >::value();
  }
  static const char* value(const ::map_msgs::ProjectedMapsInfoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::map_msgs::ProjectedMapsInfoResponse> should match 
// service_traits::MD5Sum< ::map_msgs::ProjectedMapsInfo > 
template<>
struct MD5Sum< ::map_msgs::ProjectedMapsInfoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::map_msgs::ProjectedMapsInfo >::value();
  }
  static const char* value(const ::map_msgs::ProjectedMapsInfoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::map_msgs::ProjectedMapsInfoResponse> should match 
// service_traits::DataType< ::map_msgs::ProjectedMapsInfo > 
template<>
struct DataType< ::map_msgs::ProjectedMapsInfoResponse>
{
  static const char* value()
  {
    return DataType< ::map_msgs::ProjectedMapsInfo >::value();
  }
  static const char* value(const ::map_msgs::ProjectedMapsInfoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAP_MSGS_MESSAGE_PROJECTEDMAPSINFO_H
