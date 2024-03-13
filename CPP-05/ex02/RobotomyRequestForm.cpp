#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm with target: " << target << " constructed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm with target: " << _target << " destructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), _target(other._target) {
        std::cout << "RobotomyRequestForm with target: " << _target << " copied" << std::endl;
    }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        _target = other._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        std::cout << "*Drilling noises...*" << std::endl;
        srand(time(NULL));
        if (rand() % 2 == 0)
            std::cout << _target << " has been robotomized successfully!" << std::endl;
        else
            std::cout << "Robotomy on " << _target << " failed." << std::endl;
    }
}

std::ostream& operator<<(std::ostream &out, const RobotomyRequestForm &rhs) {
    out << "RobotomyRequestForm: " << rhs.getName() << ", signed: " << (rhs.getSigned() ? "Yes" : "No")
        << ", grade required to sign: " << rhs.getGradeToSign() << ", grade required to execute: "
        << rhs.getGradeToExecute();
    return out;
}