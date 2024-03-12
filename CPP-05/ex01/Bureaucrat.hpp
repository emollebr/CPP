#pragma once 
# define BUREAUCRAT_CLASS_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

    public:

        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);

        const std::string&  getName() const;
        int                 getGrade() const;
        void                signForm(Form &form);
        void                incrementGrade();
        void                decrementGrade();
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

