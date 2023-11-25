# include "ScavTrap.hpp"
# include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap dt1( "omer" );
    // DiamondTrap dt2( dt1 );
    // DiamondTrap dt3("oolkay");

    dt1.whoAmI();
    // dt2.whoAmI();
    // dt3 = dt1;
    // dt3.whoAmI();

    dt1.attack( "oolkay" );
    std::cout << dt1.getHitPoints() << std::endl;
    std::cout << dt1.getEnergyPoints() << std::endl;
    std::cout << dt1.getAttackDamage() << std::endl;
    dt1.whoAmI();


    return (0);
}