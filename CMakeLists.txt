cmake_minimum_required(VERSION 3.30.5)
project(gcrisp-script)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(${PROJECT_NAME} ${SRC_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC include)

add_subdirectory(lib)
target_link_libraries(${PROJECT_NAME} PUBLIC gcrisp)



