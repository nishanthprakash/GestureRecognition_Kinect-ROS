FILE(REMOVE_RECURSE
  "../src/gesture/msg"
  "../msg_gen"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/gesture.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_gesture.lisp"
  "../msg_gen/lisp/HandPos.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_HandPos.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
