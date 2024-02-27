#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    type = "Cat";
    std::cout << "Cat was created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat killed" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}
