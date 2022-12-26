#include "Intern.hpp"

// main 02
int main() 
{
    try {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
