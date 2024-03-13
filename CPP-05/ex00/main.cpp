#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        // Create a bureaucrat with valid grade
        Bureaucrat b1("John", 3);

        // Increment grade
        b1.incrementGrade();
        std::cout << "Incremented grade: " << b1 << std::endl;

        // Decrement grade
        b1.decrementGrade();
        std::cout << "Decremented grade: " << b1 << std::endl;
    } catch (std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    // Attempt to create a bureaucrat with grade too high
    try {
        Bureaucrat b2("Alice", 0); // Should throw exception
        std::cout << "Created bureaucrat: " << b2 << std::endl;
    } catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Attempt to create a bureaucrat with grade too low
    try {
        Bureaucrat b3("Bob", 151); // Should throw exception
        std::cout << "Created bureaucrat: " << b3 << std::endl;
    } catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}
