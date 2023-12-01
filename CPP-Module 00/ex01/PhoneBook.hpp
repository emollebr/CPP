#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include "Contact.hpp"
# include <string.h>

class PhoneBook
{
public:
    PhoneBook( void );
    int         Add( void );
    int         Search( void );
    int         DisplayAllContacts( void );
    std::string CreateDisplayString(std::string PrintThis);
    int         DisplayContact(int num);
    int         Exit( void );
    ~PhoneBook( void );
    
private:
    Contact ContactArray[8];
    int num_of_contacts;
};

#endif