cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -pthread)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable( VictoryConnectServer ${SOURCES} )
target_link_libraries( VictoryConnectServer ${OpenCV_LIBS} )