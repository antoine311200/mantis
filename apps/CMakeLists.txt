cmake_minimum_required(VERSION 3.25)

project(main)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE mantis)

# Include Eigen3
find_package(Eigen3 REQUIRED)


target_link_libraries(main PRIVATE Eigen3::Eigen)

target_compile_features(main PUBLIC cxx_std_20)
