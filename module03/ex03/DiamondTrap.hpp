#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& rhs);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& rhs);

        using ScavTrap::attack;
        void    whoAmI();
        
    private:
        std::string _name;
};

#endif