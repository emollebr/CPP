#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    std::cout << "Animal Tests:\n" << std::endl;
    const Animal* meta = new Animal();
    Dog* j = new Dog();
    Cat* i = new Cat();

    std::cout << j->getType() << " says:" << std::endl;
    j->makeSound(); //will output the cat sound!
    std::cout << i->getType() << " says:" << std::endl;
    i->makeSound();
     std::cout << "animal says:" << std::endl;
    meta->makeSound();

    //test copying
    Cat *c_copy = new Cat(*i);

    delete j;
    delete i;
    delete meta;
    delete c_copy;

    std::cout << "\nWrong Animal Tests:\n" << std::endl;
    //const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* a = new WrongDog();
    const WrongAnimal* b = new WrongCat();

    std::cout << a->getType() << " as WrongAnimal says: " << std::endl;
    a->makeSound(); //will output the cat sound!
    std::cout << b->getType() << "as WrongAnimal says: " << std::endl;
    b->makeSound();
    WrongCat CorrectWrong;
    std::cout << "WrongCat says:" << std::endl;
    CorrectWrong.makeSound();
    //wrong->makeSound();

    delete a;
    delete b;
    //delete wrong;


    return 0;
}