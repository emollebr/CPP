#include "Dog.hpp"

Dog::Dog( void ) : AAnimal()
{
    type = "Dog";
    _brain = new Brain();
    std::cout << "Dog: Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)  : AAnimal(copy)
{
     std::cout << "Dog: copy constructor called" << std::endl;
     _brain = new Brain();
     *this = copy;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
        *_brain = *other._brain;
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog: destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}

void Dog::setIdea(std::string idea) {
    _brain->setIdea(idea);
}

std::string Dog::getIdea(size_t index) const {
    return _brain->getIdea(index);
}