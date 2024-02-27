#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    std::cout << "Animal Tests:\n" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " says:" << std::endl;
    i->makeSound(); //will output the cat sound!
    std::cout << i->getType() << " says:" << std::endl;
    j->makeSound();
    meta->makeSound();

    delete j;
    delete i;
    delete meta;

    std::cout << "\nWrong Animal Tests:\n" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* a = new WrongDog();
    const WrongAnimal* b = new WrongCat();

    std::cout << a->getType() << " says:" << std::endl;
    a->makeSound(); //will output the cat sound!
    std::cout << b->getType() << " says:" << std::endl;
    b->makeSound();
    wrong->makeSound();

    delete a;
    delete b;
    delete wrong;

    return 0;
}