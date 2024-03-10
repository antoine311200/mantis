#pragma once

#include <string>

#include <Eigen/Core>
#include <Eigen/Dense>

namespace mantis {
    std::string get_greeting();

    Eigen::MatrixXd get_matrix();
}