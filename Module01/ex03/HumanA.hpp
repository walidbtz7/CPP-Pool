#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon & _weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        std::string getName();
        void        setName(std::string name);
        void        setWeapon(Weapon& weapon);
        void        attack();
};

#endif