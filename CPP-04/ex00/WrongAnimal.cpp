#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string    WrongAnimal::getType(void) const
{
    return this->type;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "*wrong animal sound*" << std::endl;
}