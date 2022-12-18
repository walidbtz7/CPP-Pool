#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(std::string ideas[]) {
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = ideas[i];
    }
}

Brain::Brain(Brain const & src) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &rhs) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}
