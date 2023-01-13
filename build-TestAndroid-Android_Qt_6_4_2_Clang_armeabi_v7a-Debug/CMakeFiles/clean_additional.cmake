# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TestAndroid_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TestAndroid_autogen.dir\\ParseCache.txt"
  "TestAndroid_autogen"
  )
endif()
