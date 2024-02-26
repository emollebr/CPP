#pragma once 
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
private:
    int                         _value;
    static const int    _fractionalBits = 8;
public:
    Fixed( void );
    Fixed (const Fixed &fixed);
    Fixed& operator= (const Fixed &fixed);
    ~Fixed();
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};
