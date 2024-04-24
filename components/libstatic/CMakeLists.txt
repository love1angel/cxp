file(GLOB HDRS include/*.hpp)
file(GLOB SRCS src/*.hpp src/*.cpp)

add_library(
    static
        STATIC
            ${HDRS}
            ${SRCS}
)

target_include_directories(
    static
        PUBLIC
            include
)
