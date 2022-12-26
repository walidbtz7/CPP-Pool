#ifndef Form_HPP
#define Form_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        const int _gradeToSign;
        const int _gradeToExecute;
        bool _isSigned;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const & src);
        virtual ~Form()  = 0;
        Form & operator=(Form const & rhs);
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat const & bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
         class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
        class FormNotSignedException : public std::exception {
            public:
                const char* what() const throw();
        };
};

Form & operator<<(std::ostream & o, Form const & rhs);

#endif