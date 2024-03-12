#pragma once
# define DOG_CLASS_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
