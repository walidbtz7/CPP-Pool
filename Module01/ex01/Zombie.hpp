#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
    public:
        void announce( void );
        std::string  getName( void );
        void    setName(std::string name);
        Zombie();
        ~Zombie();
    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif