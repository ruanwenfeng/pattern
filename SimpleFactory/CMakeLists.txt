﻿aux_source_directory(. SRC_LIST)
include_directories(include)
file(GLOB_RECURSE PROJECT_HEADERS include/*.h)
#ADD_DEFINITIONS(-DXSOCKET_EXPORTS)
#add_library(XSocket STATIC  ${SRC_LIST} ${PROJECT_HEADERS})
add_executable(SimpleFactory  ${SRC_LIST} ${PROJECT_HEADERS})
