cmake_minimum_required(VERSION 3.30)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "0e5b6991-d74f-4b3d-a41c-cf096e0b2508")
set(CMAKE_CXX_MODULE_STD TRUE)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

set(CMAKE_EXPORT_COMPILE_COMMANDS YES)


project(example LANGUAGES CXX)

add_library(${CMAKE_PROJECT_NAME})
target_sources(
  ${CMAKE_PROJECT_NAME}
  PUBLIC
  FILE_SET CXX_MODULES FILES
  src/core/ignore.cppm
  src/core/lib.cppm
  src/core/match.cppm
  src/lib.cppm
)
target_compile_features(
  ${CMAKE_PROJECT_NAME}
  PRIVATE cxx_std_23
)

add_executable(main)
target_sources(
  main
  PRIVATE src/main.cpp
)
target_link_libraries(
  main
  PRIVATE ${CMAKE_PROJECT_NAME}
)
target_compile_features(
  main
  PRIVATE cxx_std_23
)
