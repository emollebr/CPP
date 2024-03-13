#pragma once
# define AFORM_CLASS_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;

    protected:
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class FormNotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

    public:

        AForm(const std::string &name, int gradeToSign, int gradeToExecute);
        virtual ~AForm() = 0;
        AForm(const AForm &other);
        AForm& operator=(const AForm &other);

        const std::string& getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(const Bureaucrat &b);
        virtual void execute(const Bureaucrat &executor) const = 0;
};

std::ostream& operator<<(std::ostream &out, const AForm &aform);
