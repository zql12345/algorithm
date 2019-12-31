cmake_minimum_required(VERSION 3.15)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories( ${PROJECT_SOURCE_DIR}/include )

add_subdirectory( SelectSort )
add_subdirectory( BubbleSort )
add_subdirectory( LinearSearch )

link_directories( ${PROJECT_SOURCE_DIR}/lib )
add_executable( algorithm main.cpp )

target_link_libraries( algorithm libBubbleSort.a )
target_link_libraries( algorithm libSelectSort.a )
target_link_libraries( algorithm libLinearSearch.a )





