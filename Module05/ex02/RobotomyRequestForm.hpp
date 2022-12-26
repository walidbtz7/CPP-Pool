#ifndef ROBOTMY_REQUEST_FORM_HPP
#define ROBOTMY_REQUEST_FORM_HPP
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
        const std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif