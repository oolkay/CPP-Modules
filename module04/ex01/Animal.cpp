#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "[ANIMAL] Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "[ANIMAL] Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "[ANIMAL] Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "[ANIMAL] Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "[ANIMAL] Animal assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::makeSound() const
{
    std::cout << "[ANIMAL] bruh" << std::endl;
}


