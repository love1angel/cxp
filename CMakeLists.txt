cmake_minimum_required(VERSION 3.29)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)


project(cxp LANGUAGES C CXX ASM)

# all system filesystem
set(Boost_COMPONENTS ALL)
find_package(Boost 1.85 REQUIRED COMPONENTS ${Boost_COMPONENTS})
message(STATUS "Boost directories is: ${BOOST_INCLUDE_DIR}")


add_subdirectory(third_party/googletest)


add_executable(cxp main.cpp)

if(Boost_FOUND)
    target_include_directories(cxp PRIVATE ${Boost_INCLUDE_DIRS})
    target_link_libraries(cxp 
    PRIVATE
        gtest_main
        ${Boost_LIBRARIES}
)
endif()
