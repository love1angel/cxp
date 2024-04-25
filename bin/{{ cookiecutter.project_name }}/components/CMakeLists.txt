file(GLOB SUBDIRS "${CMAKE_CURRENT_SOURCE_DIR}/*")

foreach(SUBDIR ${SUBDIRS})
    if(IS_DIRECTORY ${SUBDIR})
        message(STATUS "components subdir is: ${SUBDIR}")
        add_subdirectory(${SUBDIR})
    endif()
endforeach()
