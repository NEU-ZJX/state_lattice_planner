/* Auto-generated by genmsg_cpp for file /home/amsl/AMSL_ros_pkg/rwrc16/trajectory_generation/srv/TableLookUP.srv */
#ifndef TRAJECTORY_GENERATION_SERVICE_TABLELOOKUP_H
#define TRAJECTORY_GENERATION_SERVICE_TABLELOOKUP_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "geometry_msgs/PoseStamped.h"


#include "trajectory_generation/path_params.h"

namespace trajectory_generation
{
template <class ContainerAllocator>
struct TableLookUPRequest_ {
  typedef TableLookUPRequest_<ContainerAllocator> Type;

  TableLookUPRequest_()
  : goal()
  {
  }

  TableLookUPRequest_(const ContainerAllocator& _alloc)
  : goal(_alloc)
  {
  }

  typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _goal_type;
   ::geometry_msgs::PoseStamped_<ContainerAllocator>  goal;


  typedef boost::shared_ptr< ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::trajectory_generation::TableLookUPRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct TableLookUPRequest
typedef  ::trajectory_generation::TableLookUPRequest_<std::allocator<void> > TableLookUPRequest;

typedef boost::shared_ptr< ::trajectory_generation::TableLookUPRequest> TableLookUPRequestPtr;
typedef boost::shared_ptr< ::trajectory_generation::TableLookUPRequest const> TableLookUPRequestConstPtr;



template <class ContainerAllocator>
struct TableLookUPResponse_ {
  typedef TableLookUPResponse_<ContainerAllocator> Type;

  TableLookUPResponse_()
  : params()
  , flag(0)
  {
  }

  TableLookUPResponse_(const ContainerAllocator& _alloc)
  : params(_alloc)
  , flag(0)
  {
  }

  typedef  ::trajectory_generation::path_params_<ContainerAllocator>  _params_type;
   ::trajectory_generation::path_params_<ContainerAllocator>  params;

  typedef int8_t _flag_type;
  int8_t flag;


  typedef boost::shared_ptr< ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::trajectory_generation::TableLookUPResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct TableLookUPResponse
typedef  ::trajectory_generation::TableLookUPResponse_<std::allocator<void> > TableLookUPResponse;

typedef boost::shared_ptr< ::trajectory_generation::TableLookUPResponse> TableLookUPResponsePtr;
typedef boost::shared_ptr< ::trajectory_generation::TableLookUPResponse const> TableLookUPResponseConstPtr;


struct TableLookUP
{

typedef TableLookUPRequest Request;
typedef TableLookUPResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct TableLookUP
} // namespace trajectory_generation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::trajectory_generation::TableLookUPRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "85ae384b155cfbcdf597bf321f1d0169";
  }

  static const char* value(const  ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x85ae384b155cfbcdULL;
  static const uint64_t static_value2 = 0xf597bf321f1d0169ULL;
};

template<class ContainerAllocator>
struct DataType< ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "trajectory_generation/TableLookUPRequest";
  }

  static const char* value(const  ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/PoseStamped goal\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::trajectory_generation::TableLookUPResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "50b0f1010d8e32f78840a7ab5225ff8b";
  }

  static const char* value(const  ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x50b0f1010d8e32f7ULL;
  static const uint64_t static_value2 = 0x8840a7ab5225ff8bULL;
};

template<class ContainerAllocator>
struct DataType< ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "trajectory_generation/TableLookUPResponse";
  }

  static const char* value(const  ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "trajectory_generation/path_params params\n\
int8 flag\n\
\n\
\n\
================================================================================\n\
MSG: trajectory_generation/path_params\n\
Header header\n\
float32 k0\n\
float32 k1\n\
float32 kf\n\
float32 sf\n\
float32 v0\n\
float32 a0\n\
float32 vt\n\
float32 af\n\
float32 vf\n\
float32 dt\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::trajectory_generation::TableLookUPRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TableLookUPRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::trajectory_generation::TableLookUPResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.params);
    stream.next(m.flag);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TableLookUPResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<trajectory_generation::TableLookUP> {
  static const char* value() 
  {
    return "e59b537a5dc79a8445a0e0ad3a15d115";
  }

  static const char* value(const trajectory_generation::TableLookUP&) { return value(); } 
};

template<>
struct DataType<trajectory_generation::TableLookUP> {
  static const char* value() 
  {
    return "trajectory_generation/TableLookUP";
  }

  static const char* value(const trajectory_generation::TableLookUP&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<trajectory_generation::TableLookUPRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e59b537a5dc79a8445a0e0ad3a15d115";
  }

  static const char* value(const trajectory_generation::TableLookUPRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<trajectory_generation::TableLookUPRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "trajectory_generation/TableLookUP";
  }

  static const char* value(const trajectory_generation::TableLookUPRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<trajectory_generation::TableLookUPResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e59b537a5dc79a8445a0e0ad3a15d115";
  }

  static const char* value(const trajectory_generation::TableLookUPResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<trajectory_generation::TableLookUPResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "trajectory_generation/TableLookUP";
  }

  static const char* value(const trajectory_generation::TableLookUPResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // TRAJECTORY_GENERATION_SERVICE_TABLELOOKUP_H
