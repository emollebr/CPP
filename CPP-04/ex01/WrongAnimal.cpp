#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
     std::cout << "WrongAnimal: copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
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