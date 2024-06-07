project(Student)

add_library(${PROJECT_NAME} StudentOOP.cpp StudentOOP.hpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

