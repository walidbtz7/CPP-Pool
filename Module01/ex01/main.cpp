#include "Zombie.hpp"

int main()
{
    Zombie *test = zombieHorde(5, "walid");
     for (int i = 0; i < 5 ; i++)    
            test[i].announce();
    delete [] test;
}