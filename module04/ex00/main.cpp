#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int a = 5;

int *nbr = &a;
int *ptr = nbr;


int main()
{
    // Animal *obj = new Animal();
    // Animal *obj = new Cat();
    // Animal *obj1 = new Dog();
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    
    // INITIALIZE
    std::cout << "INITIALIZE\n";
    Animal *obj1 = new Animal();
    Animal *obj2 = new Cat();
    Animal *obj3 = new Dog();
    std::cout << "\n";


    // TYPE
    std::cout << "TYPE\n";
    std::cout << obj1->getType() << std::endl;
    std::cout << obj2->getType() << std::endl;
    std::cout << obj3->getType() << std::endl;
    std::cout << "\n";

    // MAKE SOUND
    std::cout << "MAKE SOUND\n";
    obj1->makeSound();
    obj2->makeSound();
    obj3->makeSound();
    std::cout << "\n";

    // DELETE
    std::cout << "DELETE\n";
    delete obj1;
    delete obj2;
    delete obj3;
    std::cout << "\n";

    //WRONG CAT
    std::cout << "WRONG CAT\n";
    WrongAnimal *obj4 = new WrongAnimal();
    WrongAnimal *obj5 = new WrongCat();
    WrongCat *obj6 = new WrongCat();
    std::cout << "\n";

    // TYPE
    std::cout << "TYPE\n";
    std::cout << obj4->getType() << std::endl;
    std::cout << obj5->getType() << std::endl;
    std::cout << "\n";

    // MAKE SOUND
    std::cout << "MAKE SOUND\n";
    obj4->makeSound();
    obj5->makeSound();
    obj6->makeSound();
    std::cout << "\n";

    // DELETE
    std::cout << "DELETE\n";
    delete obj4;
    delete obj5;
    delete obj6;



}