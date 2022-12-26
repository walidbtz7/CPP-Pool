#ifndef SCALAR_HPP
#define SCALAR_HPP
#include <iostream>

class Scalar {
    public:
        Scalar();
        Scalar(std::string target);
        Scalar(const Scalar& src);
        ~Scalar();
        Scalar& operator=(const Scalar& other);
    private:
        std::string _target;
};
#endif