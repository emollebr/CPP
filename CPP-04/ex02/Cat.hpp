#pragma once
# define CAT_CLASS_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain* _brain;

    public:
    Cat( void );
    ~Cat();
    Cat(const Cat &copy);
    Cat& operator=(const Cat &other);

    void makeSound(void) const;
    std::string   getIdea(size_t ideaIndex) const;
    void          setIdea(std::string idea);
};
