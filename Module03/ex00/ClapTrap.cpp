#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hit(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hit = other._hit;
        _energy = other._energy;
        _damage = other._damage;
    }
    std::cout << "ClapTrap assignation operator called" << std::endl;
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if(_energy)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
        _energy--;
    }
    else
        std::cout << "No Energy Points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hit - amount < 0)
        _hit    -= amount;
    else
        _hit = 0;
    std::cout << "ClapTrap " << _name << " take " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energy)
    {
        _hit += amount;
        std::cout << "ClapTrap " << _name << " reparire " << amount << " Hit" << std::endl;
        _energy--;
    }
    else
        std::cout << "No Energy Points left" << std::endl;
}