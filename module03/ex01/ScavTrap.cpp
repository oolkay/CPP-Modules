#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << GREEN << "ScavTrap " << _name << " is created from ClapTrap by default constructor" << DEFAULT << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << GREEN <<"ScavTrap " << name << " is created from ClapTrap by parameterized constructor" << DEFAULT << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& rhs): ClapTrap(rhs)
{
    std::cout << GREEN <<"ScavTrap " << rhs._name << " is created by copy constructor" <<DEFAULT << std::endl;
    *this = rhs;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << "ScavTrap " << rhs._name << " is created by assignment operator" << std::endl;
    if (&rhs == this)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << RED <<"ScavTrap " << _name << " is destroyed by destructor" << DEFAULT <<std::endl;
}

void ScavTrap::guardGate()
{
    if (_hitPoints > 0)
        std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
    else
        std::cout << "ScavTrap " << _name << " is dead" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << _name << " attacks brutally " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}