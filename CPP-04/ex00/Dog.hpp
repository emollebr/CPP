#pragma once
# define DOG_CLASS_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog( void );
    ~Dog();
};

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    std::cout << "Dog was created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog killed" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "Woof woof" << std::endl;
}
