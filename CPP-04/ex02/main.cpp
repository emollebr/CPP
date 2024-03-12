#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    std::cout << "\nBrain Tests:\n" << std::endl;

    //AAnimal no_way;
    Dog* dog = new Dog;
    Cat* cat = new Cat;

    dog->setIdea("I am a dog?");    
    std::cout << "Dog idea: " << static_cast<Dog*>(dog)->getIdea(0) << std::endl;

    static_cast<Cat*>(cat)->setIdea("I am a cat?");    
    std::cout << "Cat idea: " << static_cast<Cat*>(cat)->getIdea(0) << std::endl;

    delete dog;
    delete cat;

    return 0;
    return 0;
}