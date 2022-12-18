#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string type)
{
    this->_type = type;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& src)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
        _type = other._type;
    std::cout << "Cat assignation operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}