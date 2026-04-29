# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appconstructionOfSoftware_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appconstructionOfSoftware_autogen.dir\\ParseCache.txt"
  "appconstructionOfSoftware_autogen"
  )
endif()
