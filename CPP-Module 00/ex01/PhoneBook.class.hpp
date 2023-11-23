#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include "Contact.class.hpp"
# include <string.h>

class PhoneBook
{
private:
    Contact ContactArray[8];
    static int numCon;
public:
    PhoneBook();
    int Add( void );
    int Search();
    int Exit( void );
    ~PhoneBook();
};

#endif