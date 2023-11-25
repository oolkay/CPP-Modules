#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << GREEN << "### FragTrap default constructor called ###" << DEFAULT << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << GREEN << "### FragTrap parameterized constructor called ###" << DEFAULT << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap): ClapTrap(fragTrap)
{
    std::cout << GREEN << "### FragTrap copy constructor called ###" << DEFAULT << std::endl;
    *this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
    std::cout << GREEN << "### FragTrap assignment operator called ###" << DEFAULT << std::endl;
    if (this != &fragTrap)
    {
        _name = fragTrap._name;
        _hitPoints = fragTrap._hitPoints;
        _energyPoints = fragTrap._energyPoints;
        _attackDamage = fragTrap._attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << RED << "### FragTrap destructor called ###" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (_hitPoints > 0 && _energyPoints > 0)
        std::cout << CYAN << "FragTrap " << _name << " says: High five, guys!" << DEFAULT << std::endl;
    else
        std::cout << CYAN << "FragTrap " << _name << " is dead or it has no energy" << DEFAULT << std::endl;
}
