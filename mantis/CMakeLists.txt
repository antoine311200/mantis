cmake_minimum_required(VERSION 3.25)

project(mantis)

add_library(${PROJECT_NAME} src/test.cpp)
find_package(Eigen3 REQUIRED)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PRIVATE Eigen3::Eigen)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)