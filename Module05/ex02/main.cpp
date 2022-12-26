#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// main 02
int main() 
{
    try 
    {
        Bureaucrat bureaucrat("Bureaucrat", 1);
        RobotomyRequestForm robotomyRequestForm("RobotomyRequestForm");
        ShrubberyCreationForm shrubberyCreationForm("ShrubberyCreationForm");
        std::cout << robotomyRequestForm;
        std::cout << shrubberyCreationForm;
        bureaucrat.signForm(robotomyRequestForm);
        bureaucrat.signForm(shrubberyCreationForm);
        std::cout << robotomyRequestForm;
        std::cout << shrubberyCreationForm;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
