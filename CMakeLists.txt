cmake_minimum_required(VERSION 3.16)
project(vivify-quest)

set(METADATA_ID "vivify-quest")
set(CMAKE_CXX_STANDARD 20)

# Add your source files
add_library(${METADATA_ID} SHARED
    src/main.cpp
)

# Crucial for 1.40.8
target_link_libraries(${METADATA_ID}
    modloader
    beatsaber-hook_5
)
