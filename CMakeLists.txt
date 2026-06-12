cmake_minimum_required(VERSION 3.10)
project(VivifyQuest)

set(METADATA_ID "vivify-quest")
set(METADATA_NAME "Vivify Quest")

# Set the Android NDK for GitHub Actions
set(CMAKE_CXX_STANDARD 20)

# Add your source files here
add_library(${METADATA_ID} SHARED
    src/main.cpp
    # Add other .cpp files as you create them
)

# Standard Quest Mod linkages
target_link_libraries(${METADATA_ID}
    modloader
    beatsaber-hook_5
)
