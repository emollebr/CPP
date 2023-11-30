#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include "Contact.hpp"
# include <string.h>

class PhoneBook
{
public:
    PhoneBook( void );
    int Add( void );
    int Search();
    int Exit( void );
    ~PhoneBook();
    
private:
    Contact ContactArray[8];
    int num_of_contacts;
};

#endif