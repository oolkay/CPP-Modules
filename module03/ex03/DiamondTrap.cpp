#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
    std::cout << GREEN << "~~~DiamondTrap default constructor called~~~" << DEFAULT <<std::endl;
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_attackDamage = FragTrap::_attackDamage;

}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    // std::cout << &(ScavTrap::_energyPoints) << std::endl;
    // std::cout << &(FragTrap::_energyPoints) << std::endl;
    std::cout << GREEN << "~~~DiamondTrap parameter constructor called~~~" << DEFAULT <<std::endl;
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs): ScavTrap(rhs), FragTrap(rhs)
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

int DiamondTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int DiamondTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int DiamondTrap::getAttackDamage() const
{
    return this->_attackDamage;
}