#include <iostream>

#include "test.hpp"

int main() {
    std::cout << mantis::get_greeting() << std::endl;

    Eigen::MatrixXd m = mantis::get_matrix();
    std::cout << m << std::endl;

    return 0;
}