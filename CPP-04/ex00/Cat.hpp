#pragma once
# define CAT_CLASS_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat( void );
    ~Cat();
};

Cat::Cat( void ) : Animal()
{
    type = "Cat";
    std::cout << "Cat was created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat killed" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}
