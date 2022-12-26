#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

class Intern {
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern & operator=(Intern const & rhs);
        Form * makeForm(std::string formName, std::string target);
        class FormNotFoundException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif