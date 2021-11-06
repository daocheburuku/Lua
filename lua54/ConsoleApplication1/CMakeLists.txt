cmake_minimum_required(VERSION 3.17)

include_directories(${PROJECT_SOURCE_DIR}/lua54/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/ConsoleApplication1/src MAIN_SRC)
link_directories(${PROJECT_SOURCE_DIR}/x64/Release)


set(CMAKE_CONFIGURATION_TYPES Release)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/x64)

add_executable(ConsoleApplication1 ${MAIN_SRC})