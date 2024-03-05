#pragma once
# define AANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal( void );
    virtual ~AAnimal();
    AAnimal(const AAnimal &copy);
    AAnimal& operator=(const AAnimal &other);

    std::string  getType(void) const;
    virtual void makeSound(void) const = 0;
};
