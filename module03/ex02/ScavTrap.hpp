#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

//UpperCamelCase
//Orthodox Canonical Class Form
//A default constructor
//A copy constructor
//A destructor
//An assignation operator overload

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavTrap);
        ScavTrap& operator=(const ScavTrap &scavTrap);
        ~ScavTrap();
        void attack(std::string const &target);
        void guardGate(void);
};

#endif