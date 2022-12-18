#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Animal  Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
        _type = other._type;
    std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return _type;
}