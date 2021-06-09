cmake_minimum_required (VERSION 3.1)
project(cxlog)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/")
include(ConfigureAllModules)   

add_subdirectory(src)
