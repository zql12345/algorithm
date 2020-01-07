include_directories( ${PROJECT_SOURCE_DIR}/include/queue )
set( LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib )
add_library( queue SHARED queue.cpp )