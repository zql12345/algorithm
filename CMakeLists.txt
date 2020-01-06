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
add_subdirectory( BinaryTree )

link_directories( ${PROJECT_SOURCE_DIR}/lib )
add_executable( main main.cpp)

target_link_libraries( main -lBubbleSort )
target_link_libraries( main -lSelectSort )
target_link_libraries( main -lLinearSearch )
target_link_libraries( main -lRecursion )
target_link_libraries( main -lPermutations )
target_link_libraries( main -lBinaryTree )




