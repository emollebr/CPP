#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) : _nIdeas(0) {
    std::cout << "Brain: constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
     std::cout << "Brain: copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain: Copy assignment operator called" << std::endl;
    if (this != &other) {
       for (size_t i = 0; i < 100; ++i)
            this->_ideas[i] = other._ideas[i];
    }
    return *this;
}

std::string    Brain::getIdea(size_t ideaIndex) const {
    return _ideas[ideaIndex];
}

void    Brain::setIdea(std::string idea) {
    int i = 0;

    while (!_ideas[i].empty())
        ++i;
    _ideas[i] = idea;
}

Brain::~Brain(void) {
    std::cout << "Brain: destructor called" << std::endl;
}