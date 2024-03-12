#pragma once
# define CAT_CLASS_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
