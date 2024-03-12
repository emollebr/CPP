#pragma once 
# define SHRUBBERY_CREATION_FORM_CLASS_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;

    public:
        ShrubberyCreationForm(const std::string& target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        
        void    execute(const Bureaucrat& executer) const;
};

std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm const &scf);