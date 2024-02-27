#pragma once
# define WRONG_CAT_CLASS_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat( void );
    ~WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat& operator=(const WrongCat &other);

    void makeSound(void) const;
};
