#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <cstdlib>

int    PhoneBook::Add( void )
{
    this->numCon++;
    ContactArray[this->numCon % 8].set_contact(this->numCon);
    return (0);
}
/*
int PhoneBook::Search( void )
{
    //display contacts as described in the subject
    //prompt user for the index
    std::string SearchIndex;

    std::cout << "Index of entry to display: " << std::endl;
    std::cin >> SearchIndex;
    
    //display given index one field per line, truncate fields that are too long
    std::cout << ContactArray[].get_firstname << "\n";
    std::cout << ContactArray[].get_lastname << "\n";
    std::cout << ContactArray[].get_nickname << "\n";
    std::cout << ContactArray[].get_phonenumber << "\n";
    std::cout << ContactArray[].get_darkestsecret << std::endl;
}
*/
int PhoneBook::Exit()
{
    char buf[3];

    std::cout << "Are you sure you want to exit? All contacts will be lost.\n Enter [Y]" << std::endl;
    std::cin >> buf;
    if (strcmp(buf, "Y") || strcmp(buf, "y"))
        std::exit(0);
    return (0);
}