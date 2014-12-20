FILE(REMOVE_RECURSE
  "../src/body_msgs/msg"
  "../msg_gen"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/body_msgs/SkeletonJoint.h"
  "../msg_gen/cpp/include/body_msgs/Skeletons.h"
  "../msg_gen/cpp/include/body_msgs/Hand.h"
  "../msg_gen/cpp/include/body_msgs/Hands.h"
  "../msg_gen/cpp/include/body_msgs/Skeleton.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
