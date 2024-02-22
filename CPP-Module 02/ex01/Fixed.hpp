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
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed &fixed);
    Fixed& operator= (const Fixed &fixed);
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);