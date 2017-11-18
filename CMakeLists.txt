cmake_minimum_required(VERSION 3.8)
project(project1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Point.cpp Point.h Triangle.cpp Triangle.h Recentagle.cpp Recentagle.h)
add_executable(project1 ${SOURCE_FILES} Point.cpp Point.h Triangle.cpp Triangle.h Recentagle.cpp Recentagle.h)