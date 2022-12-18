#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string type)
{
    this->_type = type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& src)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
        _type = other._type;
    std::cout << "Dog assignation operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}