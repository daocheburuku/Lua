cmake_minimum_required(VERSION 3.17)

include_directories(${PROJECT_SOURCE_DIR}/lua54/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/lua54lib/src LUA54LIB_SRC)
link_directories(${PROJECT_SOURCE_DIR}/x64/Release)



set(CMAKE_CONFIGURATION_TYPES Release)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/x64)

add_library(mylib SHARED ${LUA54LIB_SRC})

