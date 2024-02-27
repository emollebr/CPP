#include "WrongDog.hpp"

WrongDog::WrongDog( void ) : WrongAnimal()
{
    type = "WrongDog";
    std::cout << "WrongDog was created" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog killed" << std::endl;
}

void    WrongDog::makeSound(void) const
{
    std::cout << "wrong Woof" << std::endl;
}
