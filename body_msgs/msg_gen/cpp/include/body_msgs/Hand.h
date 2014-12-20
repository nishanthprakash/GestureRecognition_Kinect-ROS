/* Auto-generated by genmsg_cpp for file /root/GR/body_msgs/msg/Hand.msg */
#ifndef BODY_MSGS_MESSAGE_HAND_H
#define BODY_MSGS_MESSAGE_HAND_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "geometry_msgs/Point.h"
#include "geometry_msgs/Transform.h"
#include "geometry_msgs/Point.h"
#include "sensor_msgs/PointCloud2.h"

namespace body_msgs
{
template <class ContainerAllocator>
struct Hand_ : public ros::Message
{
  typedef Hand_<ContainerAllocator> Type;

  Hand_()
  : stamp()
  , seq(0)
  , thumb(0)
  , left(false)
  , arm()
  , palm()
  , fingers()
  , handcloud()
  , state()
  {
  }

  Hand_(const ContainerAllocator& _alloc)
  : stamp()
  , seq(0)
  , thumb(0)
  , left(false)
  , arm(_alloc)
  , palm(_alloc)
  , fingers(_alloc)
  , handcloud(_alloc)
  , state(_alloc)
  {
  }

  typedef ros::Time _stamp_type;
  ros::Time stamp;

  typedef int32_t _seq_type;
  int32_t seq;

  typedef int32_t _thumb_type;
  int32_t thumb;

  typedef uint8_t _left_type;
  uint8_t left;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _arm_type;
   ::geometry_msgs::Point_<ContainerAllocator>  arm;

  typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _palm_type;
   ::geometry_msgs::Transform_<ContainerAllocator>  palm;

  typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _fingers_type;
  std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  fingers;

  typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _handcloud_type;
   ::sensor_msgs::PointCloud2_<ContainerAllocator>  handcloud;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  state;


  ROS_DEPRECATED uint32_t get_fingers_size() const { return (uint32_t)fingers.size(); }
  ROS_DEPRECATED void set_fingers_size(uint32_t size) { fingers.resize((size_t)size); }
  ROS_DEPRECATED void get_fingers_vec(std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other > & vec) const { vec = this->fingers; }
  ROS_DEPRECATED void set_fingers_vec(const std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other > & vec) { this->fingers = vec; }
private:
  static const char* __s_getDataType_() { return "body_msgs/Hand"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "7cef0afb7e7be00fa897ba75c86d7ea4"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "time stamp\n\
int32 seq    # seq is used for tracking the hand - \n\
			 # if the seq number is the same, you can assume that the hand is the same as previously seen\n\
int32 thumb\n\
bool left    # if this hand is the left hand\n\
geometry_msgs/Point arm\n\
geometry_msgs/Transform palm\n\
geometry_msgs/Point[] fingers\n\
sensor_msgs/PointCloud2 handcloud\n\
#Possibilities for state variable:\n\
# open - open palm, usually five fingers\n\
# grip - fingers curled forward\n\
# paddle -  fingers together and straight\n\
# fist   \n\
string state\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, stamp);
    ros::serialization::serialize(stream, seq);
    ros::serialization::serialize(stream, thumb);
    ros::serialization::serialize(stream, left);
    ros::serialization::serialize(stream, arm);
    ros::serialization::serialize(stream, palm);
    ros::serialization::serialize(stream, fingers);
    ros::serialization::serialize(stream, handcloud);
    ros::serialization::serialize(stream, state);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, stamp);
    ros::serialization::deserialize(stream, seq);
    ros::serialization::deserialize(stream, thumb);
    ros::serialization::deserialize(stream, left);
    ros::serialization::deserialize(stream, arm);
    ros::serialization::deserialize(stream, palm);
    ros::serialization::deserialize(stream, fingers);
    ros::serialization::deserialize(stream, handcloud);
    ros::serialization::deserialize(stream, state);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(stamp);
    size += ros::serialization::serializationLength(seq);
    size += ros::serialization::serializationLength(thumb);
    size += ros::serialization::serializationLength(left);
    size += ros::serialization::serializationLength(arm);
    size += ros::serialization::serializationLength(palm);
    size += ros::serialization::serializationLength(fingers);
    size += ros::serialization::serializationLength(handcloud);
    size += ros::serialization::serializationLength(state);
    return size;
  }

  typedef boost::shared_ptr< ::body_msgs::Hand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::body_msgs::Hand_<ContainerAllocator>  const> ConstPtr;
}; // struct Hand
typedef  ::body_msgs::Hand_<std::allocator<void> > Hand;

typedef boost::shared_ptr< ::body_msgs::Hand> HandPtr;
typedef boost::shared_ptr< ::body_msgs::Hand const> HandConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::body_msgs::Hand_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::body_msgs::Hand_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace body_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::body_msgs::Hand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7cef0afb7e7be00fa897ba75c86d7ea4";
  }

  static const char* value(const  ::body_msgs::Hand_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7cef0afb7e7be00fULL;
  static const uint64_t static_value2 = 0xa897ba75c86d7ea4ULL;
};

template<class ContainerAllocator>
struct DataType< ::body_msgs::Hand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "body_msgs/Hand";
  }

  static const char* value(const  ::body_msgs::Hand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::body_msgs::Hand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "time stamp\n\
int32 seq    # seq is used for tracking the hand - \n\
			 # if the seq number is the same, you can assume that the hand is the same as previously seen\n\
int32 thumb\n\
bool left    # if this hand is the left hand\n\
geometry_msgs/Point arm\n\
geometry_msgs/Transform palm\n\
geometry_msgs/Point[] fingers\n\
sensor_msgs/PointCloud2 handcloud\n\
#Possibilities for state variable:\n\
# open - open palm, usually five fingers\n\
# grip - fingers curled forward\n\
# paddle -  fingers together and straight\n\
# fist   \n\
string state\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
\n\
";
  }

  static const char* value(const  ::body_msgs::Hand_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::body_msgs::Hand_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.stamp);
    stream.next(m.seq);
    stream.next(m.thumb);
    stream.next(m.left);
    stream.next(m.arm);
    stream.next(m.palm);
    stream.next(m.fingers);
    stream.next(m.handcloud);
    stream.next(m.state);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Hand_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::body_msgs::Hand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::body_msgs::Hand_<ContainerAllocator> & v) 
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "seq: ";
    Printer<int32_t>::stream(s, indent + "  ", v.seq);
    s << indent << "thumb: ";
    Printer<int32_t>::stream(s, indent + "  ", v.thumb);
    s << indent << "left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left);
    s << indent << "arm: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.arm);
    s << indent << "palm: ";
s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.palm);
    s << indent << "fingers[]" << std::endl;
    for (size_t i = 0; i < v.fingers.size(); ++i)
    {
      s << indent << "  fingers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.fingers[i]);
    }
    s << indent << "handcloud: ";
s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.handcloud);
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
  }
};


} // namespace message_operations
} // namespace ros

#endif // BODY_MSGS_MESSAGE_HAND_H

