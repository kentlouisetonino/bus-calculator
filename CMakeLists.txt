cmake_minimum_required(VERSION 3.0)
project(cli-transportation-calculator)

# * Set the C++ standard.
set(CMAKE_CXX_STANDARD 11)

# * Add your C++ source files here
add_executable(app
  app.cpp
  headers/clearscreen.hpp
  headers/appdescription.hpp
)
