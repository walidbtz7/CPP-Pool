#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("mbabi"), _grade(150) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if(_grade < 1)
        throw (GradeTooHighException());
    else if(_grade > 150)
        throw (GradeTooLowException());
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src){
    *this = src;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if (this != &rhs) {
        this->_grade = rhs._grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade == 1)
        throw (GradeTooHighException());
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade == 150)
        throw (GradeTooLowException());
    _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}