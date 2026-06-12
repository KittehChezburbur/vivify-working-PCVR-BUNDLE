# Root CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(VivifyMod)

include(extern/qpm/cmake/QPM.cmake)

# Link your dependencies provided by QPM
find_package(codegen REQUIRED)
find_package(bsml REQUIRED)

add_library(VivifyMod SHARED src/main.cpp)
target_link_libraries(VivifyMod PRIVATE ${IMPORTED_LIBS} bsml::bsml)
