#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    std::string name;
    Weapon wep;
    public:
        void attack( void );
        HumanA( std::string name, Weapon wep );
};

#endif