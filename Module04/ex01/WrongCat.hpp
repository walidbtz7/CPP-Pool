#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(WrongCat const & src);
        ~WrongCat();
        WrongCat & operator=(WrongCat const & rhs);
        void    makeSound() const;
};

#endif