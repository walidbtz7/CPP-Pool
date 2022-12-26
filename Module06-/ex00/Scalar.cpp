#include "Scalar.hpp"

Scalar::Scalar()
{
    std::cout << "Scalar Constractor Called" << std::endl;
}

Scalar::Scalar(std::string target) : _target(target)
{
    std::cout << "Scalar Constractor Called" << std::endl;
}

Scalar::Scalar(const Scalar& src) {
    std::cout << "Scalar copy constructor called" << std::endl;
    *this = src;
}

Scalar::~Scalar() {
    std::cout << "Scalar destructor called" << std::endl;
}


Scalar& Scalar::operator=(const Scalar& other) {
    std::cout << "Scalar assignation operator called" << std::endl;
    this->_target = other._target;
    return *this;
}
