#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b1("mbabi", 150);
        std::cout << b1.getName() << " " << b1.getGrade() << std::endl;
        b1.decrementGrade();
        std::cout << b1.getName() << " " << b1.getGrade() << std::endl;
        b1.incrementGrade();
        std::cout << b1.getName() << " " << b1.getGrade() << std::endl;
    }  catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}