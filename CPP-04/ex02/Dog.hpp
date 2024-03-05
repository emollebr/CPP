#pragma once
# define DOG_CLASS_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
    Brain* _brain;
    
    public:
    Dog( void );
    ~Dog();
    Dog(const Dog &copy);
    Dog& operator=(const Dog &other);

    void makeSound(void) const;
    std::string   getIdea(size_t ideaIndex) const;
    void          setIdea(std::string idea);
};
