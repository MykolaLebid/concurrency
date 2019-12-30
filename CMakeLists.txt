cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(thread_creation LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
#list(APPEND CMAKE_CXX_FLAGS "-pthread ${CMAKE_CXX_FLAGS}")

#add_subdirectory(3_threads)
#add_subdirectory(ref_types)
add_subdirectory(release_sequence_57)
