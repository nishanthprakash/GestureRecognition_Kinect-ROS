FILE(REMOVE_RECURSE
  "../src/gesture/msg"
  "../msg_gen"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/gesture/msg/__init__.py"
  "../src/gesture/msg/_gesture.py"
  "../src/gesture/msg/_HandPos.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
