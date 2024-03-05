#pragma once
# define WRONG_ANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal( void );
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal& operator=(const WrongAnimal &other);

    std::string  getType(void) const;
    void makeSound(void) const;
};
