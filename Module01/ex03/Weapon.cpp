#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
    this->_type = type;
    std::cout << "A Weapon contracted " << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "A Weapon destructed " << getType() << std::endl;
}

std::string Weapon::getType()
{
    return _type;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}
