#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
    std::cout << "Brain: constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
     std::cout << "Brain: copy constructor called" << std::endl;
    for (size_t i = 0; i < 100; ++i)
        this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain: Copy assignment operator called" << std::endl;
    if (this != &other) {
       for (size_t i = 0; i < 100; ++i)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain: destructor called" << std::endl;
}