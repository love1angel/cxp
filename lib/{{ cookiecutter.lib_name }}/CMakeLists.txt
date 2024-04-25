file(GLOB HDRS include/*.hpp)
file(GLOB SRCS src/*.hpp src/*.cpp)

add_library(
    {{ cookiecutter.lib_name }}
        STATIC
            ${HDRS}
            ${SRCS}
)

target_include_directories(
    {{ cookiecutter.lib_name }}
        PUBLIC
            include
)
