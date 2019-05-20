cmake_minimum_required(VERSION 3.10.2)

project(CmakeBuildProject)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

execute_process(COMMAND python3 "./A/preparing.py")
add_custom_target(Header DEPENDS COMMAND)

include_directories(A)
add_subdirectory(B)

add_executable(CmakeBuildProject C/main.cpp)
add_dependencies(CmakeBuildProject Header)

target_include_directories(CmakeBuildProject PRIVATE ${CMAKE_BINARY_DIR})
target_link_libraries(CmakeBuildProject Lib)






