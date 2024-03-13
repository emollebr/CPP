#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat " << name << " constructed" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat " << _name << " destructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {
    std::cout << "Bureaucrat " << _name << " copied" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other) {
        _grade = other._grade;
    }
    return *this;
}

void    Bureaucrat::signForm(AForm &form) {
    std::string reason;

    if (_grade > form.getGradeToSign())
        reason = "grade too low";
    else if (form.getSigned() == true)
        reason = "form already signed";
    else {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
        return ;
    }
    std::cout << _name << " couldn’t sign " << form.getName() << " because " << reason << std::endl;
}

void    Bureaucrat::executeForm(AForm const &form) {
    if (_grade > form.getGradeToExecute())
        std::cout << "Error: Bureaucrat " << _name << " grade too low to execute " << form.getName() << std::endl;
    else if (form.getSigned() == false)
        std::cout << "Error: Bureaucrat " << _name << " couldn’t execute "<< form.getName() << " because it is not signed!" << std::endl;
    else
        form.execute(*this);
}

const std::string& Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::incrementGrade() {
    if (_grade < 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade > 150)
        throw GradeTooLowException();
    _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Error: Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Error: Grade too low!";
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b) {
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}
