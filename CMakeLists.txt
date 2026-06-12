cmake_minimum_required(VERSION 3.16)
project(vivify)

set(METADATA_ID "vivify")
set(METADATA_NAME "Vivify")

# Scotland2 requirement
set(CMAKE_CXX_STANDARD 20)

# Define where your code is
add_library(${METADATA_ID} SHARED
    src/main.cpp
)

# Connect to the Beat Saber headers (v1.40.8)
target_link_libraries(${METADATA_ID}
    modloader
    beatsaber-hook_5
)
