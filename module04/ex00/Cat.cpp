#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "[CAT] Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "[CAT] Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "[CAT] Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    Animal::operator=(copy);
    std::cout << "[CAT] Cat assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "[CAT] meow" << std::endl;
}