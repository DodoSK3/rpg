cmake_minimum_required(VERSION 3.24)
project(rpg)

set(CMAKE_CXX_STANDARD 17)
include_directories("include")

add_executable(rpg main.cpp "source/Character.cpp" "source/PlayerCharacter.cpp")