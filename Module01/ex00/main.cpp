#include "Zombie.hpp"

int main()
{
    Zombie *test = newZombie("walid");
    test->announce();
    delete test;
    randomChump("test");
}