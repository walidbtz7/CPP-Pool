#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& src);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& other);
        void guardGate();
};
#endif