/* Auto-generated by genmsg_cpp for file /root/GR/body_msgs/msg/Skeletons.msg */
#ifndef BODY_MSGS_MESSAGE_SKELETONS_H
#define BODY_MSGS_MESSAGE_SKELETONS_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"
#include "body_msgs/Skeleton.h"

namespace body_msgs
{
template <class ContainerAllocator>
struct Skeletons_ : public ros::Message
{
  typedef Skeletons_<ContainerAllocator> Type;

  Skeletons_()
  : header()
  , skeletons()
  {
  }

  Skeletons_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , skeletons(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::body_msgs::Skeleton_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::body_msgs::Skeleton_<ContainerAllocator> >::other >  _skeletons_type;
  std::vector< ::body_msgs::Skeleton_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::body_msgs::Skeleton_<ContainerAllocator> >::other >  skeletons;


  ROS_DEPRECATED uint32_t get_skeletons_size() const { return (uint32_t)skeletons.size(); }
  ROS_DEPRECATED void set_skeletons_size(uint32_t size) { skeletons.resize((size_t)size); }
  ROS_DEPRECATED void get_skeletons_vec(std::vector< ::body_msgs::Skeleton_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::body_msgs::Skeleton_<ContainerAllocator> >::other > & vec) const { vec = this->skeletons; }
  ROS_DEPRECATED void set_skeletons_vec(const std::vector< ::body_msgs::Skeleton_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::body_msgs::Skeleton_<ContainerAllocator> >::other > & vec) { this->skeletons = vec; }
private:
  static const char* __s_getDataType_() { return "body_msgs/Skeletons"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "8d6667331403917cc53d8d820001e6f9"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
body_msgs/Skeleton[] skeletons\n\
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
MSG: body_msgs/Skeleton\n\
int32 playerid\n\
body_msgs/SkeletonJoint head\n\
body_msgs/SkeletonJoint neck\n\
body_msgs/SkeletonJoint right_hand\n\
body_msgs/SkeletonJoint left_hand\n\
body_msgs/SkeletonJoint right_shoulder\n\
body_msgs/SkeletonJoint left_shoulder\n\
body_msgs/SkeletonJoint right_elbow\n\
body_msgs/SkeletonJoint left_elbow\n\
body_msgs/SkeletonJoint torso\n\
body_msgs/SkeletonJoint left_hip\n\
body_msgs/SkeletonJoint right_hip\n\
body_msgs/SkeletonJoint left_knee\n\
body_msgs/SkeletonJoint right_knee\n\
body_msgs/SkeletonJoint left_foot\n\
body_msgs/SkeletonJoint right_foot\n\
\n\
================================================================================\n\
MSG: body_msgs/SkeletonJoint\n\
geometry_msgs/Point position\n\
float32 confidence\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, skeletons);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, skeletons);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(skeletons);
    return size;
  }

  typedef boost::shared_ptr< ::body_msgs::Skeletons_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::body_msgs::Skeletons_<ContainerAllocator>  const> ConstPtr;
}; // struct Skeletons
typedef  ::body_msgs::Skeletons_<std::allocator<void> > Skeletons;

typedef boost::shared_ptr< ::body_msgs::Skeletons> SkeletonsPtr;
typedef boost::shared_ptr< ::body_msgs::Skeletons const> SkeletonsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::body_msgs::Skeletons_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::body_msgs::Skeletons_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace body_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::body_msgs::Skeletons_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8d6667331403917cc53d8d820001e6f9";
  }

  static const char* value(const  ::body_msgs::Skeletons_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8d6667331403917cULL;
  static const uint64_t static_value2 = 0xc53d8d820001e6f9ULL;
};

template<class ContainerAllocator>
struct DataType< ::body_msgs::Skeletons_<ContainerAllocator> > {
  static const char* value() 
  {
    return "body_msgs/Skeletons";
  }

  static const char* value(const  ::body_msgs::Skeletons_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::body_msgs::Skeletons_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
body_msgs/Skeleton[] skeletons\n\
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
MSG: body_msgs/Skeleton\n\
int32 playerid\n\
body_msgs/SkeletonJoint head\n\
body_msgs/SkeletonJoint neck\n\
body_msgs/SkeletonJoint right_hand\n\
body_msgs/SkeletonJoint left_hand\n\
body_msgs/SkeletonJoint right_shoulder\n\
body_msgs/SkeletonJoint left_shoulder\n\
body_msgs/SkeletonJoint right_elbow\n\
body_msgs/SkeletonJoint left_elbow\n\
body_msgs/SkeletonJoint torso\n\
body_msgs/SkeletonJoint left_hip\n\
body_msgs/SkeletonJoint right_hip\n\
body_msgs/SkeletonJoint left_knee\n\
body_msgs/SkeletonJoint right_knee\n\
body_msgs/SkeletonJoint left_foot\n\
body_msgs/SkeletonJoint right_foot\n\
\n\
================================================================================\n\
MSG: body_msgs/SkeletonJoint\n\
geometry_msgs/Point position\n\
float32 confidence\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::body_msgs::Skeletons_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::body_msgs::Skeletons_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::body_msgs::Skeletons_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::body_msgs::Skeletons_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.skeletons);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Skeletons_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::body_msgs::Skeletons_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::body_msgs::Skeletons_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "skeletons[]" << std::endl;
    for (size_t i = 0; i < v.skeletons.size(); ++i)
    {
      s << indent << "  skeletons[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::body_msgs::Skeleton_<ContainerAllocator> >::stream(s, indent + "    ", v.skeletons[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // BODY_MSGS_MESSAGE_SKELETONS_H

