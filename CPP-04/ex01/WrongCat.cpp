#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
     std::cout << "WrongCat: copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "WrongCat: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat killed" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "wrong Miau" << std::endl;
}
