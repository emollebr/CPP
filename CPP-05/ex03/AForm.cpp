#include "AForm.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();

    std::cout << "AForm " << name << " constructed" << std::endl;
}

AForm::~AForm() {
    std::cout << "AForm " << _name << " destructed" << std::endl;
}

AForm::AForm(const AForm &other)
    : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
        std::cout << "AForm " << _name << " copied" << std::endl;
    }

AForm& AForm::operator=(const AForm &other) {
    if (this != &other) {
        _signed = other._signed;
    }
    return *this;
}

const std::string& AForm::getName() const {
    return _name;
}

bool AForm::getSigned() const {
    return _signed;
}

int AForm::getGradeToSign() const {
    return _gradeToSign;
}

int AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &b) {
    if (b.getGrade() <= _gradeToSign && this->getSigned() == false)
        _signed = true;
    else if (this->getSigned() == true)
        std::cout << "AForm " << _name << " already signed!" << std::endl;
    else
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form not signed!";
}

std::ostream& operator<<(std::ostream &out, const AForm &f) {
    out << "AForm: " <<f.getName() << ", signed: " << (f.getSigned() ? "Yes" : "No")
        << ", grade required to sign: " << f.getGradeToSign() << ", grade required to execute: "
        << f.getGradeToExecute();
    return out;
}
