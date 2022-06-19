# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "13FriendDemo_autogen"
  "CMakeFiles\\13FriendDemo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\13FriendDemo_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\integer.cpp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\integer.cpp_autogen.dir\\ParseCache.txt"
  "integer.cpp_autogen"
  )
endif()
