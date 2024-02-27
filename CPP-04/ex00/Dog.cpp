#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    std::cout << "Dog was created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog killed" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}
