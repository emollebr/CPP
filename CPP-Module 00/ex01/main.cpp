#include "Contact.hpp"
#include "PhoneBook.hpp"

# include <iostream>
# include <string.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <sstream>

int main( void )
{
    std::string   input;
    PhoneBook   phonebook;

    while (1)
    {
        std::cout << "\nPlease enter option:\n\nADD\nSEARCH\nEXIT\n\n" << std::endl;
        std::cin >> input;
        if (input == "ADD" || input == "add")
            phonebook.Add();
        else if (input == "SEARCH" || input == "search")
            phonebook.Search();
        else if (input == "EXIT" || input == "exit") {
            if (phonebook.Exit() == 1)
                break ;
        }
        else
            std::cout << "Invalid option. \n\n" << std::endl;
    }
    return (0);
}