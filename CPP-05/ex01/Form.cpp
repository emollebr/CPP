#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();

    std::cout << "Form " << name << " constructed" << std::endl;
}

Form::~Form() {
    std::cout << "Form " << _name << " destructed" << std::endl;
}

Form::Form(const Form &other)
    : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
        std::cout << "Form " << _name << " copied" << std::endl;
    }

Form& Form::operator=(const Form &other) {
    if (this != &other) {
        _signed = other._signed;
    }
    return *this;
}

const std::string& Form::getName() const {
    return _name;
}

bool Form::getSigned() const {
    return _signed;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &b) {
    if (b.getGrade() <= _gradeToSign && this->getSigned() == false)
        _signed = true;
    else if (this->getSigned() == true)
        std::cout << "Form " << _name << " already signed!" << std::endl;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
    out << "Form: " << form.getName() << ", signed: " << (form.getSigned() ? "Yes" : "No")
        << ", grade required to sign: " << form.getGradeToSign() << ", grade required to execute: "
        << form.getGradeToExecute();
    return out;
}
