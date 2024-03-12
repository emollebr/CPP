#pragma once 
# define PRESIDENTIAL_PARDON_FORM_CLASS_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string _target;

    public:
        PresidentialPardonForm(const std::string& target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        
        void    execute(const Bureaucrat& executer) const;
};

std::ostream& operator<<(std::ostream& o, PresidentialPardonForm const ppf);