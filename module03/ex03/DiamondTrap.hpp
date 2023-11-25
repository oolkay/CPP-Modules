#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& rhs);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& rhs);
        int getEnergyPoints() const;
        int getHitPoints() const;
        int getAttackDamage() const;
        void    whoAmI();
        using ScavTrap::attack;
        
    private:
        std::string _name;
};

#endif