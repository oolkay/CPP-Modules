#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    brain = new Brain();
    std::cout << "[CAT] Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
    std::cout << "[CAT] Cat copy constructor called" << std::endl;
    _type = copy._type;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdeas(i, copy.brain->getIdeas(i));
}

Cat::~Cat()
{
    std::cout << "[CAT] Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &copy)
{
    AAnimal::operator=(copy);
    std::cout << "[CAT] Cat assignation operator called" << std::endl;
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

void Cat::makeSound() const
{
    std::cout << "[CAT] meow" << std::endl;
}

Brain* Cat::getBrain() const
{
    return (brain);
}