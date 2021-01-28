cmake_minimum_required(VERSION 3.13.5)
project(MyExe)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "/EHsc")

add_executable(myexe main.cpp)

add_subdirectory(somelib)
target_link_libraries(myexe somelib)
target_include_directories(myexe PRIVATE somelib/include)
