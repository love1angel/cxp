cmake_minimum_required(VERSION 3.16)


project({{ cookiecutter.project_name }} LANGUAGES C CXX ASM)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(
    ${PROJECT_NAME}
        PRIVATE
            {{ cookiecutter.lib_name }}
)


add_subdirectory(components)
