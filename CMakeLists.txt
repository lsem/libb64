cmake_minimum_required(VERSION 3.5)

file(GLOB_RECURSE b64_h "include/*.h")
file(GLOB_RECURSE b64_c "src/*.c")
file(GLOB_RECURSE b64_cpp "src/*.cpp")
add_library(b64 ${b64_h} ${b64_c} ${b64_cpp})
add_library(b64::b64 ALIAS b64)
target_include_directories(b64 PUBLIC include/)

