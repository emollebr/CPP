#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <string.h>

class Contact
{
public:
    Contact( void );
    ~Contact( void );

    int index;

    int set_contact( int );
    
    std::string get_firstname( void ) const;
    std::string get_lastname( void ) const;
    std::string get_nickname( void ) const;
    std::string get_phonenumber( void ) const;
    std::string get_darkestsecret( void ) const;
      
private:
    void set_firstname( std::string );
    void set_lastname( std::string );
    void set_nickname( std::string );
    void set_phonenumber( std::string );
    void set_darkestsecret( std::string );

    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkestsecret; 
    
};

#endif
