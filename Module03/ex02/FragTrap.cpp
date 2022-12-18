#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "default";
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::guardGate() {
    std::cout << "FragTrap  " << _name <<" is now in Gate keeper mode." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hit = other._hit;
        _energy = other._energy;
        _damage = other._damage;
    }
    std::cout << "FragTrap assignation operator called" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives :)" << std::endl;
}
