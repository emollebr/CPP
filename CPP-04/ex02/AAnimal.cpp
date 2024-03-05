#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
    std::cout << "AAnimal: constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
     std::cout << "AAnimal: copy constructor called" << std::endl;
     *this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << "AAnimal: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal: destructor called" << std::endl;
}

/*#######################################################*/

std::string    AAnimal::getType(void) const
{
    return type;
}

void    AAnimal::makeSound(void) const
{
    std::cout << "*animal sound*" << std::endl;
}