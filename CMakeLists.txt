cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(lemons C)

if(MSVC)
    add_definitions(-DUNICODE -D_UNICODE)
endif()


if(CMAKE_VERSION VERSION_LESS "3.1")
    set(CMAKE_C_FLAGS "-std=c11 ${CMAKE_C_FLAGS}")
else()
    set(CMAKE_C_STANDARD 11)
    set(CMAKE_C_STANDARD_REQUIRED ON)
endif()


set(OUTPUT_DIR ${CMAKE_SOURCE_DIR}/out)
set(ARCHIVE_DIR ${CMAKE_SOURCE_DIR}/archive)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${ARCHIVE_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${ARCHIVE_DIR})

# avoid the extra "Debug", "Release" directories
foreach(OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES})
    string(TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${OUTPUT_DIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${ARCHIVE_DIR})
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${ARCHIVE_DIR})
endforeach()

add_subdirectory(lib/)

message(STATUS "building lemons...")
set(LEMONS_SRC 
	src/image.c
	src/openal.c
	src/global.h
)

add_library(liblemons SHARED ${LEMONS_SRC})

if(DEFINED $ENV{HASHLINK})
	message(FATAL_ERROR "the \"HASHLINK\" enviroment variable must be defined")
else()
	target_include_directories(liblemons PUBLIC $ENV{HASHLINK}/include)
	target_link_libraries(liblemons $ENV{HASHLINK}/libhl.lib)
endif()

target_include_directories(liblemons PUBLIC lib/openal-soft/include)
target_include_directories(liblemons PUBLIC lib/include/)
target_link_libraries(liblemons OpenAL)


set_target_properties(liblemons PROPERTIES LINKER_LANGUAGE C)
set_target_properties(liblemons PROPERTIES LINKER_LANGUAGE C)
set_target_properties(liblemons PROPERTIES OUTPUT_NAME lemons PREFIX "" SUFFIX .hdll)

