#include "Bureaucrat.hpp"

int main() {
    try 
    {
        Form form("Form", 150, 1);
        Bureaucrat bureaucrat("Bureaucrat", 150);
        std::cout << form;
        bureaucrat.signForm(form);
        std::cout << form;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}