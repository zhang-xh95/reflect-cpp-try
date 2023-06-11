cmake_minimum_required(VERSION 3.24)
project(reflection_c_test)

set(CMAKE_CXX_STANDARD 11)

add_executable(reflection_c_test main.cpp reflection/ReflectFactory.h reflection/ReflectFactory.cpp test/A.h reflection/ClassRegister.h test/B.h)
include_directories("reflection")
include_directories("test")