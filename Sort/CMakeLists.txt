
include_directories( ${PROJECT_SOURCE_DIR}/include )
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib )

ADD_LIBRARY(BubbleSort  BubbleSort.cpp)
ADD_LIBRARY(SelectSort  SelectSort.cpp)