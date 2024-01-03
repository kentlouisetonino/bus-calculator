cmake_minimum_required(VERSION 3.0)
project(bus-calculator)

# Set the C++ standard.
set(CMAKE_CXX_STANDARD 11)

# Add your C++ source files here
add_executable(app
  src/app.cpp
  src/libs/clearscreen.cpp
  src/libs/appdescription.cpp
)

