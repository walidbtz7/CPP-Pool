#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap {
    public:
        ClapTrap ();
        ClapTrap (std::string name);
        ClapTrap(const ClapTrap& src);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        std::string _name;
        int         _hit;
        int         _energy;
        int         _damage;
};
#endif