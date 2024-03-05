#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    type = "Cat";
    _brain = new Brain();
    std::cout << "Cat: Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
     std::cout << "Cat: copy constructor called" << std::endl;
     _brain = new Brain();
     *this = copy;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
        *_brain = *other._brain;
    }
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat: destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}

void Cat::setIdea(std::string idea) {
    _brain->setIdea(idea);
}

std::string Cat::getIdea(size_t index) const {
    return _brain->getIdea(index);
}
