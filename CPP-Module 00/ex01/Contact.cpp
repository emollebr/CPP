#include "Contact.hpp"

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <sstream>

Contact::Contact( void )
{
    std::cout << "Contact constructor called" << std::endl;
}

int Contact::set_contact(int index )
{
    this->index = index;

    std::cout << "First name: " << std::endl;
    std::getline(std::cin, this->_firstname);
   
    std::cout << "Last name: " << std::endl;
    std::getline(std::cin, this->_lastname);

    std::cout << "Nickname: " << std::endl;
    std::getline(std::cin, this->_nickname);

    std::cout << "Phone number: " << std::endl;
    std::getline(std::cin, this->_phonenumber);

    std::cout << "Darkest secret: "  << std::endl;
    std::getline(std::cin, this->_darkestsecret);

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

std::string     Contact::get_phonenumber( void ) const
{
    return this->_phonenumber;
}

std::string     Contact::get_darkestsecret( void ) const
{
    return this->_darkestsecret;
}

Contact::~Contact( void )
{
    std::cout << "Contact destructor called" << std::endl;
}
