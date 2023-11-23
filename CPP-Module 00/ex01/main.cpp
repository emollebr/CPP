#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int main( void )
{
    char        input[10];
    PhoneBook   phonebook;

    while (1)
    {
        std::cout << "Please enter option:\n\nADD\nSEARCH\nEXIT\n" << std::endl;
        std::cin >> input;
        if (strcmp(input, "ADD"))
            phonebook.Add();
        else if (strcmp(input, "SEARCH"))
            phonebook.Search();
        else if (strcmp(input, "EXIT"))
            phonebook.Exit();
        else
            std::cout << "Invalid option. \n\n" << std::endl;
    }
    return (0);
}