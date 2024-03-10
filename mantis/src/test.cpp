#include "test.hpp"

#include <string>

#include <Eigen/Core>
#include <Eigen/Dense>

namespace mantis {
    std::string get_greeting() {
        return "Hello, World!";
    }

    Eigen::MatrixXd get_matrix() {
        Eigen::MatrixXd m(2, 2);
        m << 1, 2, 3, 4;
        return m;
    }
}