cmake_minimum_required(VERSION 3.1.3 FATAL_ERROR)

# this cmake is very messy, someone should make a pr to fix this up since i have no idea where to start with this

project(lemons C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(OUTPUT_DIR ${CMAKE_SOURCE_DIR}/out)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

# avoid the extra "Debug", "Release" directories
foreach(OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES})
    string(TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${OUTPUT_DIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${OUTPUT_DIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${OUTPUT_DIR})
endforeach()

message(STATUS "creating liblemons...")
set(LEMONS_SRC 
	src/image.c
	src/image.h
	src/sound.c
	src/openal.c
	src/gl.c
	src/glfw.c
	src/global.h
)

add_subdirectory(lib/)

add_library(liblemons SHARED ${LEMONS_SRC})

# why the hell is this backwards?????
if(DEFINED $ENV{HASHLINKBIN}) 
	message(FATAL_ERROR "the \"HASHLINKBIN\" enviroment variable must be defined")
else()
	target_include_directories(liblemons PUBLIC $ENV{HASHLINKBIN}/include)
	target_link_libraries(liblemons $ENV{HASHLINKBIN}/libhl${CMAKE_STATIC_LIBRARY_SUFFIX})
	# message($ENV{HASHLINKBIN}/include)
endif()

target_include_directories(liblemons PUBLIC lib/include/)

target_include_directories(liblemons PUBLIC OpenAL)
target_include_directories(liblemons PUBLIC glfw)
target_link_libraries(liblemons OpenAL)
target_link_libraries(liblemons glfw)

set_target_properties(liblemons PROPERTIES LINKER_LANGUAGE C)
set_target_properties(liblemons PROPERTIES OUTPUT_NAME lemons PREFIX "" SUFFIX .hdll)