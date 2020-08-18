cmake_minimum_required(VERSION 3.1)
project(rayfork_sokol_template LANGUAGES C)

set(CMAKE_C_STANDARD 99)

# Setup GLAD
add_library(glad libs/glad/glad.c)
target_include_directories(glad PUBLIC libs)

# Setup rayfork
add_subdirectory(libs/rayfork)

# Setup game layer
add_library(game source/game.c)
target_link_libraries(game rayfork)

# Setup platform layer
add_executable(platform source/main.c)
target_link_libraries(platform PRIVATE game glad)
target_include_directories(platform PRIVATE libs/rayfork libs/sokol)
