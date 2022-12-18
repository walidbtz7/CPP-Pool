#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "New Zombie Created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "The Zombie " << getName() << " destroyed" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

std::string Zombie::getName( void )
{
    return (_name);
}
