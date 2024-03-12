#pragma once 
# define BUREAUCRAT_CLASS_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

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

        void                signAForm(AForm &AForm);
        const std::string&  getName() const;
        int                 getGrade() const;
        void                incrementGrade();
        void                decrementGrade();
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

