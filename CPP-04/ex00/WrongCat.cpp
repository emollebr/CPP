#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat was created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat killed" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "wrong Miau" << std::endl;
}
