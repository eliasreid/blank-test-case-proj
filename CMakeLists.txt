
cmake_minimum_required(VERSION 3.20)
project(test_project VERSION 0.0.1)

add_library(lib_target   
  test_class.cpp
  test_class.h
  test_namespace.h
  test_namespace.cpp
)

target_compile_features(lib_target PRIVATE cxx_std_20)

target_include_directories(lib_target PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

find_package(Threads REQUIRED)
target_link_libraries(lib_target PRIVATE Threads::Threads)

set(TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
add_executable(tests ${TEST_SOURCES})
target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(tests PRIVATE lib_target)
