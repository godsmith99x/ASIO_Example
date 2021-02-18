cmake_minimum_required(VERSION 3.17)
project(ASIO_Example)

set(CMAKE_CXX_STANDARD 20)

set(ASIO_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/dependencies/asio-1.18.1/include)

add_executable(ASIO_Example main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${ASIO_INCLUDE_DIRS})