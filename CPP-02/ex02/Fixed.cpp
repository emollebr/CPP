/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:40:35 by emollebr          #+#    #+#             */
/*   Updated: 2024/03/04 12:40:36 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include"Fixed.hpp"

/*---------------de- and constructors---------------*/
Fixed::Fixed( void ) : _value(0)
{
    /*std::cout << "Default constructor called" << std::endl;*/
}

Fixed::Fixed(const Fixed &fixed)
{
    /*std::cout << "Copy constructor called" << std::endl;*/
    this->setRawBits(fixed.getRawBits());
}

Fixed::Fixed(const int intValue) {
    /*std::cout << "Int constructor called" << std::endl;*/
    this->_value = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue) {
    /*std::cout << "Float constructor called" << std::endl;*/
    this->_value = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
    /*std::cout << "Destructor called" << std::endl;*/
}

/*-----------------------------------------------------------------*/
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

/*-----------------------------------------------------------------*/
Fixed &Fixed::operator=(const Fixed &fixed) {
    /*std::cout << "Copy assignment operator called" << std::endl;*/
    if (this != &fixed) {
        this->_value = fixed.getRawBits();
    }
    return *this;
}
bool Fixed::operator>(const Fixed& fixed) const {
    return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed& fixed) const {
    return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed& fixed) const {
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed& fixed) const {
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed& fixed) const {
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed& fixed) const {
    return this->getRawBits() != fixed.getRawBits();
}

/*-----------------------------------------------------------------*/
Fixed Fixed::operator+(const Fixed& fixed) const {
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed& fixed) const {
    return Fixed(this->toFloat() - fixed.toFloat());
}
Fixed   Fixed::operator*( const Fixed &fixed ) const {
    return Fixed( this->toFloat() * fixed.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &fixed ) const {
    return Fixed( this->toFloat() / fixed.toFloat() );
}

/*-----------------------------------------------------------------*/

Fixed& Fixed::operator++() {
    ++(this->_value);
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->_value++;
    return tmp;
}

Fixed& Fixed::operator--() {
    --(this->_value);
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->_value--;
    return tmp;
}

/*-----------------------------------------------------------------*/
Fixed&       Fixed::min(Fixed &n1, Fixed &n2) {
    if (n1.getRawBits() < n2.getRawBits())
        return n1;
    return n2;
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2) {
    if (n1.getRawBits() < n2.getRawBits())
        return n1;
    return n2;
}

Fixed&       Fixed::max(Fixed &n1, Fixed &n2) {
    if (n1.getRawBits() > n2.getRawBits())
            return n1;
    return n2;
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2) {
    if (n1.getRawBits() > n2.getRawBits())
            return n1;
    return n2;
}

/*---------------ostream overloaded function---------------*/
std::ostream & operator<<(std::ostream & o, Fixed const & fixed) {
    o << fixed.toFloat();
    return o;
}
