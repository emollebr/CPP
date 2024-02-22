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
    bool operator>(const Fixed &fixed) const;
    bool operator<(const Fixed &fixed) const;
    bool operator>=(const Fixed &fixed) const;
    bool operator<=(const Fixed &fixed) const;
    bool operator==(const Fixed &fixed) const;
    bool operator!=(const Fixed &fixed) const;

    Fixed& operator= (const Fixed &fixed);
    Fixed operator+(const Fixed &fixed) const;
    Fixed operator-(const Fixed &fixed) const;
    Fixed operator*(const Fixed &fixed) const;
    Fixed operator/(const Fixed &fixed) const;

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    static Fixed&       min(Fixed &n1, Fixed &n2);
    static const Fixed& min(const Fixed &n1, const Fixed &n2);
    static Fixed&       max(Fixed &n1, Fixed &n2);
    static const Fixed& max(const Fixed &n1, const Fixed &n2);

};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);