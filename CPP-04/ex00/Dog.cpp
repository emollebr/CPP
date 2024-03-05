#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
     std::cout << "Dog: copy constructor called" << std::endl;
     *this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog: destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}
