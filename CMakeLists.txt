cmake_minimum_required(VERSION 3.10)
project(cpp-actions)

set(OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build/bin/${CMAKE_BUILD_TYPE}")
function(set_output_directory TYPE)
    set(CMAKE_${TYPE}_OUTPUT_DIRECTORY
        ${OUTPUT_DIRECTORY}
        PARENT_SCOPE)
    foreach(OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES})
        string(TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG)
        set(CMAKE_${TYPE}_OUTPUT_DIRECTORY_${OUTPUTCONFIG}
            ${OUTPUT_DIRECTORY}
            PARENT_SCOPE)
    endforeach()
endfunction()
set_output_directory(RUNTIME) # .exe .dll
set_output_directory(LIBRARY) # .dylib .so
set_output_directory(ARCHIVE) # .lib .a

add_executable(main src/main.cpp)
