#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    std::cout << GREEN << "~~~DiamondTrap constructor called~~~" << DEFAULT <<std::endl;
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs): ScavTrap(rhs._name), FragTrap(rhs._name)
{
    std::cout << GREEN << "~~~DiamondTrap copy constructor called~~~" << DEFAULT << std::endl;
    *this = rhs;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED <<"~~~DiamondTrap destructor called~~~" << DEFAULT <<std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
    this->FragTrap::operator=(rhs);
    this->ScavTrap::operator=(rhs);
    this->_name = rhs._name;
    
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am a DiamondTrap named " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}