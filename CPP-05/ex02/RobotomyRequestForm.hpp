#pragma once 
# define ROBOTOMY_REQUEST_FORM_CLASS_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;

    public:
        RobotomyRequestForm(const std::string& target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        
        void    execute(const Bureaucrat& executer) const;
};

std::ostream& operator<<(std::ostream& o, RobotomyRequestForm const rrf);