#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Animal: constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
     std::cout << "Animal: copy constructor called" << std::endl;
     *this = copy;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal: destructor called" << std::endl;
}

/*#######################################################*/

std::string    Animal::getType(void) const
{
    return type;
}

void    Animal::makeSound(void) const
{
    std::cout << "*animal sound*" << std::endl;
}