cmake_minimum_required(VERSION 3.29)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)


project({{ cookiecutter.project_name }} LANGUAGES CXX)


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC static)


add_subdirectory(components)
