cmake_minimum_required(VERSION 3.30.5)
project(gcrisp-engine)

add_executable(${PROJECT_NAME} src/main.c)

target_link_libraries(${PROJECT_NAME} gcrisp)

add_subdirectory(lib)

