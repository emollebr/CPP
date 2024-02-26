#include <iostream>
#include <string>
#include <cmath>
#include"Fixed.hpp"

Fixed::Fixed(/* args */) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(fixed.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed) {
        this->_value = fixed.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const int intValue) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(floatValue * (1 << _fractionalBits));
}

float Fixed::toFloat() const {
    return static_cast<float>(this->_value) / (1 << _fractionalBits);
}

int Fixed::toInt() const {
    return this->_value >> _fractionalBits;
}


int Fixed::getRawBits( void ) const
{
    /*std::cout << "getRawBits member function called" << std::endl;*/
    return this->_value;
}
void    Fixed::setRawBits(int const raw)
{
    /*std::cout << "setRawBits member function called" << std::endl;*/
    this->_value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed) {
    o << fixed.toFloat();
    return o;
}
