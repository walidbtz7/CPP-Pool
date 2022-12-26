#ifndef PRESIDENTIEAL_PARDON_FORM_HPP
#define PRESIDENTIEAL_PARDON_FORM_HPP
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        const std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif