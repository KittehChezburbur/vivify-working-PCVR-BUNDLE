cmake_minimum_required(VERSION 3.10)
project(VivifyMod)

# This is the command that creates the .so file
add_library(VivifyMod SHARED src/main.cpp)

# The name of the file generated will be 'libVivifyMod.so'
