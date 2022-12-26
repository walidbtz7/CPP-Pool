#include "Form.hpp"

Form::Form() : _name("default"), _gradeToSign(150), _gradeToExecute(150), _isSigned(false) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false) {
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }
}

Form::Form(Form const & src ) : _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()), _isSigned(src.getIsSigned()) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(Form const & rhs) {
    std::cout << "Form assignation operator called" << std::endl;
    this->_isSigned = rhs.getIsSigned();
    return *this;
}

std::string Form::getName() const {
    return this->_name;
}

int Form::getGradeToSign() const {
    return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
    return this->_gradeToExecute;
}

bool Form::getIsSigned() const {
    return this->_isSigned;
}

void Form::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign) {
        throw Form::GradeTooLowException();
    } else {
        this->_isSigned = true;
    }
}

Form & operator<<(std::ostream & o, Form const & rhs) {
    o << "Form " << rhs.getName() << " requires a grade of " << rhs.getGradeToSign() << " to be signed and a grade of " << rhs.getGradeToExecute() << " to be executed. It is currently " << (rhs.getIsSigned() ? "signed" : "unsigned") << std::endl;
    return (Form &)rhs;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low";
}


const char* Form::FormNotSignedException::what() const throw() {
    return "form isn't signed";
}