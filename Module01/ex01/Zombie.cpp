#include "Zombie.hpp"

Zombie::Zombie()
{
        std::cout << "New Zombie Created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "The Zombie with the name : " << getName() << " destroyed" << std::endl;
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

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
    }
    return (zombies);
}