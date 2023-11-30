#include "Contact.hpp"

Contact::Contact( void )
{
    std::cout << "Contact constructor called" << std::endl;
}

int Contact::set_contact(int index )
{
    this->index = index;
    std::cout << "Contact constructor called" << std::endl;
    std::cout << "First name: " << std::endl;
    std::cin >> this->_firstname;
   
    std::cout << "Last name: " << std::endl;
    std::cin >> this->_lastname;

    std::cout << "Nickname: " << std::endl;
    std::cin >> this->_nickname;

    std::cout << "Phone number: " << std::endl;
    std::cin >> this->_phonenumber;

    std::cout << "Darkest secret: "  << std::endl;
    std::cin >> this->_phonenumber;

    std::cout << "Contact added."  << std::endl;
    return (0);
}

std::string    Contact::get_firstname( void ) const
{
    return this->_firstname;
}

std::string     Contact::get_lastname( void ) const
{
    return this->_lastname;
}
std::string     Contact::get_nickname( void ) const
{
    return this->_nickname;
}