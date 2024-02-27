#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{

    std::cout << "\nBrain Tests:\n" << std::endl;

    Animal* objs[20];
    
    for (int i = 0; i < 20; ++i) {
        if (i < 10)
            objs[i] = new Dog();
        else
            objs[i] = new Cat();
    }
    return 0;
}