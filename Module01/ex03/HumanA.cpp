#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout << "A HumanA contracted" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "A HumanA destructed " << std::endl;
}

std::string HumanA::getName()
{
    return _name;
}

void    HumanA::setName(std::string name)
{
    this->_name = name; 
}

void    HumanA::setWeapon(Weapon& weapon)
{
    this->_weapon = weapon;
}

void      HumanA::attack()
{
    std::cout << getName() << " attacks with their " << _weapon.getType() << std::endl;
}