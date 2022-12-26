#ifndef SHRUBBER_CREATION_FORM_HPP
#define SHRUBBER_CREATION_FORM_HPP
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    private:
        const std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif