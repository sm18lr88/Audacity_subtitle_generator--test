cmake_minimum_required(VERSION 3.10)
project(ExportLabelsPlugin)

# Set the output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../build)

# Add the source files
set(SOURCES
    src/main.cpp
    src/ExportLabels.cpp
)

# Add the header files
set(HEADERS
    include/PluginInterface.h
    src/ExportLabels.h
)

# Define the executable
add_library(ExportLabelsPlugin SHARED ${SOURCES} ${HEADERS})

# Include directories
include_directories(include)
