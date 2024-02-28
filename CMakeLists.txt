# CMakeList.txt : CMake project for Flappy Birds, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.25)

project ("Flappy Birds")

add_library(app_compile_options INTERFACE)
target_compile_features(app_compile_options INTERFACE cxx_std_20)
target_compile_options(app_compile_options INTERFACE /W4)

find_package(Git REQUIRED)

add_subdirectory(deps/SFML EXCLUDE_FROM_ALL)

add_library(app_dependencies INTERFACE)
target_link_libraries(app_dependencies INTERFACE sfml-audio sfml-graphics sfml-window sfml-system)

add_subdirectory(src)
