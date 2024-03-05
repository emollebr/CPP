#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    type = "Cat";
    std::cout << "Cat: constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
     std::cout << "Cat: copy constructor called" << std::endl;
     *this = copy;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat: destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}
