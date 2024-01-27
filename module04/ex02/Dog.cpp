#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    brain = new Brain();
    std::cout << "[DOG] Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): AAnimal(copy)
{
    std::cout << "[DOG] Dog copy constructor called" << std::endl;
    _type = copy._type;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdeas(i, copy.brain->getIdeas(i));
}

Dog::~Dog()
{
    if (brain)
        delete brain;
    std::cout << "[DOG] Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    AAnimal::operator=(copy);
    std::cout << "[DOG] Dog assignation operator called" << std::endl;
    if (this != &copy)
    {
        if (brain)
            delete brain;
        brain = new Brain();
        for (int i = 0; i < 100; i++)
            brain->setIdeas(i, copy.brain->getIdeas(i));
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "[DOG] woof" << std::endl;
}

Brain* Dog::getBrain() const
{
    return (brain);
}
