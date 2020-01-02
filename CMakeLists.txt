cmake_minimum_required(VERSION 3.15)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories( ${PROJECT_SOURCE_DIR}/include )

add_subdirectory( SelectSort )
add_subdirectory( BubbleSort )
add_subdirectory( LinearSearch )
add_subdirectory( Recursion )
add_subdirectory( Permutations )

link_directories( ${PROJECT_SOURCE_DIR}/lib )
add_executable( main main.cpp)

target_link_libraries( main BubbleSort )
target_link_libraries( main SelectSort )
target_link_libraries( main LinearSearch )
target_link_libraries( main Recursion )
target_link_libraries( main Permutations )




