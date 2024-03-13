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
    if (getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        std::ofstream outfile((_target + "_shrubbery").c_str());
        outfile << "    /\\        /\\        /\\    " << std::endl;
        outfile << "   /  \\      /  \\      /  \\   " << std::endl;
        outfile << "  /    \\    /    \\    /    \\  " << std::endl;
        outfile << " /      \\  /      \\  /      \\ " << std::endl;
        outfile << "/________\\/________\\/________\\" << std::endl;
        outfile << "   ||||      ||||      ||||   " << std::endl;
        outfile.close();
        std::cout << "Form executed: ShrubberyCreationForm" << std::endl;
    }
}

std::ostream& operator<<(std::ostream &out, const ShrubberyCreationForm &rhs) {
    out << "ShrubberyCreationForm: " << rhs.getName() << ", signed: " << (rhs.getSigned() ? "Yes" : "No")
        << ", grade required to sign: " << rhs.getGradeToSign() << ", grade required to execute: "
        << rhs.getGradeToExecute();
    return out;
}