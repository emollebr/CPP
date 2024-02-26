#pragma once
# define ANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal( void );
    ~Animal();

    std::string  getType(void) const;
    virtual void makeSound(void) const;
};
