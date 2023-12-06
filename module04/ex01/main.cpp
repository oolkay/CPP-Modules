#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    Animal j = *(animals[3]);
    for (int i = 0; i < 10; i++)
        animals[i]->makeSound();
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    j.getType();
    j.makeSound();
}