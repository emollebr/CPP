#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    try {
        // Create a bureaucrat
        Bureaucrat bureaucrat("John", 2);

        // Create a form
        Form form("Tax Form", 2, 10);
        std::cout << form << std::endl;

        // Try signing the form with bureaucrat
        bureaucrat.signForm(form);

        //Try for the form to be signed
        form.beSigned(bureaucrat);
    } catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        // Create another bureaucrat with lower grade
        Bureaucrat lowGradeBureaucrat("Alice", 5);

         // Create a form
        Form form("Tax Form", 2, 10);

        // Try signing the form with low grade bureaucrat
        lowGradeBureaucrat.signForm(form); // Should throw exception
    } catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
