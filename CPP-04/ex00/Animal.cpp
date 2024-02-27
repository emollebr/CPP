#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Animal constructed" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

std::string    Animal::getType(void) const
{
    return this->type;
}

void    Animal::makeSound(void) const
{
    std::cout << "*animal sound*" << std::endl;
}