
message(STATUS "creating openal-soft...")
set(ALSOFT_UTILS OFF CACHE BOOL "Build utility programs")
set(ALSOFT_EXAMPLES OFF CACHE BOOL "Build example programs")

add_subdirectory(openal-soft/)
