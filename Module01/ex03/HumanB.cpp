#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    setName(name);
    std::cout << "A HumanB contracted" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "A HumanB destructed" << std::endl;
}

std::string HumanB::getName()
{
    return _name;
}

void    HumanB::setName(std::string name)
{
    this->_name = name;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void      HumanB::attack()
{
    if (!_weapon)
        std::cout << getName() << " attacks with their hands" << std::endl;
    else
        std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}