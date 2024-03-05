#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    std::cout << "\nARRAY OF DIFFERENT SUBCLASSES:" << std::endl;

    Animal* animals[6];

    for (int i = 0; i < 6; ++i) {
        std::cout << "\nCreating animal #" << i << std::endl;
        if (i < 3) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
        animals[i]->makeSound();
    }

    std::cout << "\nTESTING SETTING IDEAS IN THE BRAIN:\n" << std::endl;
    static_cast<Dog*>(animals[0])->setIdea("I am a dog?");    
    std::cout << "Dog idea: " << static_cast<Dog*>(animals[0])->getIdea(0) << std::endl;

    static_cast<Cat*>(animals[2])->setIdea("I am a cat?");    
    std::cout << "Cat idea: " << static_cast<Cat*>(animals[2])->getIdea(0) << std::endl;

    std::cout << "\nTESTING FOR DEEP COPYING:\n" << std::endl;
    Cat *original = new Cat();
    original->setIdea("prrrr");
     std::cout << "Original cat idea: " << original->getIdea(0) << std::endl;
    Cat *c_copy = new Cat(*original);
    std::cout << "Copy cat idea: " << c_copy->getIdea(0) << std::endl;

    delete original;
    std::cout << "\nCopy cat idea after deleting original: " << c_copy->getIdea(0) << std::endl;
    
    std::cout << "\nDELETING:\n" << std::endl;
    delete c_copy;
    for (int i = 0; i < 6; ++i) {
        std::cout << "\nDeleting animal #" << i << std::endl;
        delete animals[i];
    }

    return 0;
    return 0;
}