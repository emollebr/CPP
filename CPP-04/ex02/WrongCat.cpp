#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
     std::cout << "WrongCat: copy constructor called" << std::endl;
    _brain = new Brain();
     *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "WrongCat: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
        *_brain = *other._brain;
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
