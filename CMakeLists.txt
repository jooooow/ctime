cmake_minimum_required(VERSION 3.5)
project(ctime)

add_subdirectory(timelib)

add_executable(ctime ctime.cpp)

target_link_libraries(ctime PUBLIC timelib)

install(TARGETS ctime DESTINATION bin)