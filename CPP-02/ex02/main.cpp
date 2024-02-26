#include <iostream>
#include <string>
#include"Fixed.hpp"

void    myTest()
{
    Fixed a(5);
    Fixed b(3);
    
    std::cout << "Test comparison ops" << std::endl;
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
    ++a;
    std::cout << "++a = " << a << std::endl;
    
    a++;
    std::cout << "a++ = " << a << std::endl;
    
    --a;
    std::cout << "--b = " << b << std::endl;
    
    a--;
    std::cout << "b-- = " << b << std::endl;

    // Test min/max comparison ops
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