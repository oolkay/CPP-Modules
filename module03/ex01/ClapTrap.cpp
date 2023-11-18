#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << GREEN <<  "ClapTrap default constructor called" << DEFAULT <<  std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << GREEN << "ClapTrap parameterized constructor called" << DEFAULT << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    std::cout << GREEN << "ClapTrap copy constructor called" << DEFAULT << std::endl;
    this->_name = clapTrap._name;
    this->_hitPoints = clapTrap._hitPoints;
    this->_energyPoints = clapTrap._energyPoints;
    this->_attackDamage = clapTrap._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct)
{
    std::cout << GREEN << "ClapTrap assignation operator called" << DEFAULT << std::endl;
    if (this != &ct)
    {
        this->_name = ct._name;
        this->_hitPoints = ct._hitPoints;
        this->_energyPoints = ct._energyPoints;
        this->_attackDamage = ct._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0)
    {
        std::cout <<"ClapTrap " << this->_name << " is dead, he can't attack" << std::endl;
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout <<"ClapTrap " << this->_name << " has no energy, he can't attack" << std::endl;
        return ;
    }
    //ClapTrap <name> attacks <target>, causing <damage> points of damage!
    std::cout << "ClapTrap " << this->_name << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " <<this->_name << " is already dead, he can't take damage" << std::endl;
        return ;
    }
    if ((int)amount >= _hitPoints)
    {
        std::cout << "ClapTrap "  << this->_name << " has been attacked, causing " << amount << " points of damage!" << std::endl;
        std::cout << "ClapTrap "  << this->_name << " is dead" << std::endl;
        _hitPoints = 0;
        return ;
    }
    _hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " has been attacked, causing " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead, he can't be repaired" << std::endl;
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy, he can't be repaired" << std::endl;
        return ;
    }
    _hitPoints += amount;
    _energyPoints--;
    std::cout << "ClapTrap " << this->_name << " has been repaired " << amount << " points!" << std::endl;
}

int ClapTrap::getHitPoints() const
{
    return _hitPoints;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "ClapTrap destructor called" << DEFAULT << std::endl;
}
