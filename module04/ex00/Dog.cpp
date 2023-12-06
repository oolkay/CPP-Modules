#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "[DOG] Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "[DOG] Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "[DOG] Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    Animal::operator=(copy);
    std::cout << "[DOG] Dog assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "[DOG] woof" << std::endl;
}
