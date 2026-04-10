cmake_minimum_required(VERSION 3.10)
project(Sector75)

# DEV NOTE: Debug building is defaulted! Comment out later!
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Glad
add_library(glad src/glad.c)
target_include_directories(glad PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Find GLFW
find_package(glfw3 REQUIRED)

# Executable
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE glad glfw)
