#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    std::cout << "\nBrain Tests:\n" << std::endl;

    Animal* animals[10];

    for (int i = 0; i < 10; ++i) {
        std::cout << "Creating animal #" << i << std::endl;
        if (i < 5) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    static_cast<Dog*>(animals[0])->setIdea("I am a dog?");    
    std::cout << "Dog idea: " << static_cast<Dog*>(animals[0])->getIdea(0) << std::endl;

    static_cast<Cat*>(animals[10])->setIdea("I am a cat?");    
    std::cout << "Cat idea: " << static_cast<Cat*>(animals[5])->getIdea(0) << std::endl;

    std::cout << "\nCopy cat:\n" << std::endl;
    Cat *c_copy = new Cat(* dynamic_cast<Cat*>(animals[5]));
    std::cout << "Copy cat idea: " << static_cast<Cat*>(c_copy)->getIdea(0) << std::endl;

    delete c_copy;
    for (int i = 0; i < 20; ++i) {
        std::cout << "Deleting animal #" << i << std::endl;
        delete animals[i];
    }

    return 0;
    return 0;
}