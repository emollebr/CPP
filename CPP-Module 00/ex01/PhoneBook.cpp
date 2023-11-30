#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

PhoneBook::PhoneBook( void )
{
    std::cout << "Phonebook constructor called" << std::endl;
    this->num_of_contacts = 0;
}

int    PhoneBook::Add( void )
{
    this->num_of_contacts++;
    ContactArray[this->num_of_contacts % 8].set_contact(num_of_contacts % 8);
    return (0);
}

int PhoneBook::Search( void )
{
    //display contacts as described in the subject
    //prompt user for the index
    std::string SearchIndex;

    std::cout << "Index of entry to display: " << std::endl;
    std::cin >> SearchIndex;

    std::atoi(SearchIndex):
    
    //display given index one field per line, truncate fields that are too long
    if (this->ContactArray[SearchIndex].get_firstname)
    std::cout << this->ContactArray[SearchIndex].get_firstname << "\n";
    std::cout << this->ContactArray[SearchIndex].get_lastname << "\n";
    std::cout << this->ContactArray[SearchIndex].get_nickname << "\n";
    std::cout << this->ContactArray[SearchIndex].get_phonenumber << "\n";
    std::cout << this->ContactArray[SearchIndex].get_darkestsecret << std::endl;
}

int PhoneBook::Exit( void )
{
    char buf[3];

    std::cout << "Are you sure you want to exit? All contacts will be lost.\n Enter [Y]" << std::endl;
    std::cin >> buf;
    if (strcmp(buf, "Y") == 0 || strcmp(buf, "y") == 0)
        std::exit(0);
    return (0);
}

PhoneBook::~PhoneBook( void )
{
    std::cout << "Phonebook destructor called" << std::endl;
}