aux_source_directory(. SRC_LIST)
include_directories(include)
file(GLOB_RECURSE PROJECT_HEADERS include/*.h)
add_executable(Factory  ${SRC_LIST} ${PROJECT_HEADERS})
