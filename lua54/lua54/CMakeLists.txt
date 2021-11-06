include_directories(${PROJECT_SOURCE_DIR}/lua54/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/lua54/src LUA_SRC)

add_compile_definitions(LUA_BUILD_AS_DLL)


set(CMAKE_CONFIGURATION_TYPES Release)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/x64)

add_library(lua54 SHARED ${LUA_SRC})