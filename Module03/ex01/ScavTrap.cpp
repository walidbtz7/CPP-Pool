#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name = "default";
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap  " << _name <<" is now in Gate keeper mode." << std::endl;
}
