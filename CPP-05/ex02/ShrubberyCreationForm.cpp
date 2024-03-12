#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm with target: " << target << " constructed" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm with target: " << _target << " destructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target) {
        std::cout << "ShrubberyCreationForm with target: " << _target << " copied" << std::endl;
    }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

    if (executor.getGrade() <= getGradeToExecute()) {
        std::ofstream outfile((_target + "_shrubbery").c_str());
        outfile << "ASCII trees" << std::endl;
        outfile.close();
        std::cout << "Form executed: ShrubberyCreationForm" << std::endl;
    } else {
        throw AForm::GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream &out, const ShrubberyCreationForm &scf) {
    out << "Shrubbery Creation Form: " <<scf.getName() << ", signed: " << (scf.getSigned() ? "Yes" : "No")
        << ", grade required to sign: " << scf.getGradeToSign() << ", grade required to execute: "
        << scf.getGradeToExecute();
    return out;
}