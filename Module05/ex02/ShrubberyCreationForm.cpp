#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src), _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    Form::operator=(rhs);
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
    return _target;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
  if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    if (!getIsSigned())
        throw Form::FormNotSignedException();
    std::cout << _target << "executed" << std::endl;
}