#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    _brain = new Brain();
    std::cout << "Dog: Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
     std::cout << "Dog: copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
        *_brain = *other._brain;
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog: destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}
