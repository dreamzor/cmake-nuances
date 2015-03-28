# wrong/lib/CMakeLists.txt

project(lib)

add_definitions(-DMYFLAG=1)
add_library(lib lib.h lib.cpp)