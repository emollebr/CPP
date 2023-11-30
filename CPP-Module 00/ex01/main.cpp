#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdio>

int main( void )
{
    char        input[10];
    PhoneBook   phonebook;

    while (1)
    {
        std::cout << "\nPlease enter option:\n\nADD\nSEARCH\nEXIT\n" << std::endl;
        std::cin >> input;
        if (strcmp(input, "ADD") == 0)
            phonebook.Add();
        /*else if (strcmp(input, "SEARCH"))
            phonebook.Search();*/
        else if (strcmp(input, "EXIT") == 0)
            phonebook.Exit();
        else
            std::cout << "Invalid option. \n\n" << std::endl;
    }
    return (0);
}