include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME}_example_unused
    ${CMAKE_SOURCE_DIR}/include/unused.hpp
    unused.cpp)
