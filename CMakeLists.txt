cmake_minimum_required(VERSION 3.25)
project(Mantis VERSION 0.1 DESCRIPTION "Mantis is a C++ library for automatic differentiation.")

set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)

# Include Eigen3
find_package(Eigen3 REQUIRED)

# Add subdirectories
add_subdirectory(mantis)
add_subdirectory(apps)