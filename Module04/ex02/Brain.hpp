#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include "Animal.hpp"

class Brain {
    public:
        Brain();
        Brain(std::string ideas[]);
        Brain(Brain const & src);
        ~Brain();
        Brain & operator=(Brain const & rhs);
    protected:
        std::string ideas[100];
};

#endif