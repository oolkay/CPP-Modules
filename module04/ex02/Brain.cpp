#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "[Brain] constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "[Brain] copy constructor called" << std::endl;
    *this = other;
}

Brain::~Brain()
{
    std::cout << "[Brain] destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "[Brain] assignation operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

std::string Brain::getIdeas(int index) const
{
    return (this->ideas[index]);
}

void Brain::setIdeas(int index, std::string idea)
{
    this->ideas[index] = idea;
}