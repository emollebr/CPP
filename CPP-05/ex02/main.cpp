#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
    try {
        // Create a bureaucrat
        Bureaucrat bureaucrat("John", 2);

        // Create a form
        ShrubberyCreationForm shrub("test");
        std::cout << shrub << std::endl;

        // Try signing the form with bureaucrat
        bureaucrat.signAForm(shrub);

        //Try for the form to be signed
        shrub.beSigned(bureaucrat);

        //Try executing the form with the bureaucrat
        shrub.execute(bureaucrat);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {

    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
