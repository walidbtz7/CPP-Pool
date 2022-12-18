#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
    public:
        Dog();
        Dog(std::string type);
        Dog(Dog const & src);
        ~Dog();
        Dog & operator=(Dog const & rhs);
        void    makeSound() const;
    private:
        Brain*  _brain;
};

#endif