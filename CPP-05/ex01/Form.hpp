#pragma once
# define FORM_CLASS_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        
    public:

        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        ~Form();
        Form(const Form &other);
        Form& operator=(const Form &other);

        const std::string& getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(const Bureaucrat &b);
};

std::ostream& operator<<(std::ostream &out, const Form &form);
