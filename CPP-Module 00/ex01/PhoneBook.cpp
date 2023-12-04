#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook( void )
{
    std::cout << "Phonebook constructor called" << std::endl;
    this->num_of_contacts = 0;
}

int    PhoneBook::Add( void )
{
    this->num_of_contacts++;
    ContactArray[this->num_of_contacts % 8].set_contact(num_of_contacts % 8);
    DisplayContact(num_of_contacts);
    return (0);
}

int PhoneBook::DisplayContact(int num)
{
    if (num > this->num_of_contacts || num < 1)
        return(std::cout << "Invalid index" << std::endl, 1);
    std::cout << "First name: " << this->ContactArray[num].get_firstname() << "\n";
    std::cout << "Last name: " << this->ContactArray[num].get_lastname() << "\n";
    std::cout << "Nickname: " << this->ContactArray[num].get_nickname() << "\n";
    std::cout << "Phonenumber: " << this->ContactArray[num].get_phonenumber() << "\n";
    std::cout << "Darkest secret: " << this->ContactArray[num].get_darkestsecret() << std::endl;
    return (0);
}

 std::string truncate_string(const std::string& input, size_t width = 10)
    {
        if (input.length() <= width) 
            return input;
        else 
            return input.substr(0, width - 1) + ".";
    }

int PhoneBook::DisplayAllContacts( void )
{
     std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
                  << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;

        for (int i = 1; i <= num_of_contacts; ++i) 
        {
            std::cout << std::setw(10) << i << "|"
                      << std::setw(10) << truncate_string(ContactArray[i].get_firstname()) << "|"
                      << std::setw(10) << truncate_string(ContactArray[i].get_lastname()) << "|"
                      << std::setw(10) << truncate_string(ContactArray[i].get_nickname()) << "|" << std::endl;
        }
    return (0);
}

int PhoneBook::Search( void )
{
    DisplayAllContacts();
    std::cout << "\nIndex of entry to display: " << std::endl;
    int input;
    std::cin >> input;
    DisplayContact(input);
    return (0);
}

int PhoneBook::Exit( void )
{
    char buf[3];

    std::cout << "Are you sure you want to exit? All contacts will be lost.\n Enter [Y]" << std::endl;
    std::cin >> buf;
    if (strcmp(buf, "Y") == 0 || strcmp(buf, "y") == 0)
        return (1);
    return (0);
}

PhoneBook::~PhoneBook( void )
{
    std::cout << "Phonebook destructor called" << std::endl;
}