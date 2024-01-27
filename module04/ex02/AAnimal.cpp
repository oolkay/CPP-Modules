#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Animal")
{
    std::cout << "[ANIMAL] Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "[ANIMAL] Animal type constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "[ANIMAL] Animal copy constructor called" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal()
{
    std::cout << "[ANIMAL] Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
    std::cout << "[ANIMAL] Animal assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->_type);
}


