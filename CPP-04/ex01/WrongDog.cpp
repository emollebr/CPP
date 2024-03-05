#include "WrongDog.hpp"

WrongDog::WrongDog( void ) : WrongAnimal()
{
    type = "WrongDog";
    std::cout << "WrongDog was created" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy) : _brain(new Brain(*(copy._brain)))
{
     std::cout << "WrongDog: copy constructor called" << std::endl;
     *this = copy;
}

WrongDog &WrongDog::operator=(const WrongDog &other) {
    std::cout << "WrongDog: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog killed" << std::endl;
}

void    WrongDog::makeSound(void) const
{
    std::cout << "wrong Woof" << std::endl;
}
