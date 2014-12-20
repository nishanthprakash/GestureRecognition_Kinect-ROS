FILE(REMOVE_RECURSE
  "../src/body_msgs/msg"
  "../msg_gen"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/body_msgs/msg/__init__.py"
  "../src/body_msgs/msg/_SkeletonJoint.py"
  "../src/body_msgs/msg/_Skeletons.py"
  "../src/body_msgs/msg/_Hand.py"
  "../src/body_msgs/msg/_Hands.py"
  "../src/body_msgs/msg/_Skeleton.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
