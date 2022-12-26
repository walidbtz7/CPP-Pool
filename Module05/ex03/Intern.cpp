#include "Intern.hpp"

Intern::Intern() 
{
}

Intern::Intern(Intern const & src) 
{
    *this = src;
}

Intern::~Intern() 
{
}

Intern & Intern::operator=(Intern const & rhs) {
    (void)rhs;
    return *this;
}

const char* Intern::FormNotFoundException::what() const throw() {
    return  "Intern cannot create form ";
}

void   FreeForms(Form *forms[], int index)
{
    for (int i = 0; i < 3; i++)
    {
        if(i != index)
            free(forms[i]);
    }
}

Form * Intern::makeForm(std::string formName, std::string target) 
{
    Form * forms[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    Form *  res;
    int     i;

    i = 0;
    std::string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    while(i < 3)
    {
        if(!formName.compare(formNames[i]))
        {
            std::cout << "Intern create " << formName << " Form" << std::endl;
            res = forms[i];
            break;
        }
        i++;
    }
    FreeForms(forms, i);
    if (i == 3)
        throw FormNotFoundException();
    return (res);
}