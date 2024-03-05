#pragma once
# define WRONG_DOG_CLASS_HPP
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongDog : public WrongAnimal
{
private:
    Brain* _brain;
public:
    WrongDog( void );
    ~WrongDog();
    WrongDog(const WrongDog &copy);
    WrongDog& operator=(const WrongDog &other);

    void makeSound(void) const;
};
