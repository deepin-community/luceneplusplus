project(test)
cmake_minimum_required(VERSION 3.16)

find_package(liblucene++ REQUIRED)
find_package(liblucene++-contrib REQUIRED)

add_executable(main main.cxx)
include_directories(${liblucene++_INCLUDE_DIRS})
include_directories(${liblucene++-contrib_INCLUDE_DIRS})

target_link_libraries(main ${liblucene++_LIBRARIES} ${liblucene++-contrib_LIBRARIES})
