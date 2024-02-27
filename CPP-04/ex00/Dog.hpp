#pragma once
# define DOG_CLASS_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog( void );
    ~Dog();
    Dog(const Dog &copy);
    Dog& operator=(const Dog &other);

    void makeSound(void) const;
};
