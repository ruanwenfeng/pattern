cmake_minimum_required(VERSION 3.11)
project("patterndemo")
add_definitions(-DUNICODE -D_UNICODE)
add_definitions(-std=c++11)
set(CMAKE_CONFIGURATION_TYPES "Debug;Release")
include_directories("SimpleFactory/include")
add_subdirectory(SimpleFactory)


#aux_source_directory(. SRC_LIST)
#include_directories(include)
#file(GLOB_RECURSE PROJECT_HEADERS include/*.h)
#add_executable(Templates ${SRC_LIST} ${PROJECT_HEADERS})
