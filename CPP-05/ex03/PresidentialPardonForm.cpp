#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << "PresidentialPardonForm with target: " << target << " constructed" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm with target: " << _target << " destructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other), _target(other._target) {
        std::cout << "PresidentialPardonForm with target: " << _target << " copied" << std::endl;
    }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        _target = other._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}

std::ostream& operator<<(std::ostream &out, const PresidentialPardonForm &rhs) {
    out << "PresidentialPardonForm: " << rhs.getName() << ", signed: " << (rhs.getSigned() ? "Yes" : "No")
        << ", grade required to sign: " << rhs.getGradeToSign() << ", grade required to execute: "
        << rhs.getGradeToExecute();
    return out;
}