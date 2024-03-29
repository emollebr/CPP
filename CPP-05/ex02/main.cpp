#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {
        std::cout << "Shrubbery Test:\n" << std::endl;

        // Create a bureaucrat
        Bureaucrat bureaucrat("John", 2);

        // Create a form
        ShrubberyCreationForm shrub("test");
        std::cout << shrub << std::endl;

        // Try signing the form with bureaucrat
        bureaucrat.signForm(shrub);

        //Try for the form to be signed
        shrub.beSigned(bureaucrat);

        //Try executing the form with the bureaucrat
        shrub.execute(bureaucrat);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << "\nRobotomy Test:\n" << std::endl;
        // Create a bureaucrat
        Bureaucrat bureaucrat("Bill", 2);

        // Create a form
        RobotomyRequestForm robot("test");
        std::cout << robot << std::endl;

        // Try signing the form with bureaucrat
        bureaucrat.signForm(robot);

        //Try for the form to be signed
        robot.beSigned(bureaucrat);

        //Try executing the form with the bureaucrat
        robot.execute(bureaucrat);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << "\nPresidential Test:\n" << std::endl;
        // Create a bureaucrat
        Bureaucrat bureaucrat("Ken", 2);

        // Create a form
        PresidentialPardonForm pres("test");
        std::cout << pres << std::endl;

        // Try signing the form with bureaucrat
        bureaucrat.signForm(pres);

        //Try for the form to be signed
        pres.beSigned(bureaucrat);

        //Try executing the form with the bureaucrat
        bureaucrat.executeForm(pres);
        pres.execute(bureaucrat);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
