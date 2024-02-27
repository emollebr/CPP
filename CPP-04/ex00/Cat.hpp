#pragma once
# define CAT_CLASS_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat( void );
    ~Cat();
    Cat(const Cat &copy);
    Cat& operator=(const Cat &other);

    void makeSound(void) const;
};
