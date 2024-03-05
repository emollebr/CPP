/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:40:45 by emollebr          #+#    #+#             */
/*   Updated: 2024/03/04 12:40:46 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include"Fixed.hpp"

void    myTest()
{
    std::cout << "\nTest comparison ops" << std::endl;
    
    Fixed a(5);
    Fixed b(3);
    
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    
    std::cout << "Test arithmetic ops" << std::endl;
    Fixed c = a + b;
    std::cout << "a + b = " << c << std::endl;
    
    c = a - b;
    std::cout << "a - b = " << c << std::endl;
    
    c = a * b;
    std::cout << "a * b = " << c << std::endl;
    
    c = a / b;
    std::cout << "a / b = " << c << std::endl;
    
    std::cout << "Test in-/decrement ops" << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << "++a = " << ++a << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << "a++ = " << a++ << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << "a-- = " << a-- << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << "a-- = " << a-- << std::endl;
    
    std::cout << "Test min/max comparison ops" << std::endl;
    std::cout << "Min value: " << Fixed::min(a, b) << std::endl;
    std::cout << "Max value: " << Fixed::max(a, b) << std::endl;
    return ;
}

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    myTest();
    return (0);
}
