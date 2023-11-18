# include "ScavTrap.hpp"
# include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap dt1( "omer" );
    DiamondTrap dt2( dt1 );
    DiamondTrap dt3("oolkay");

    dt1.whoAmI();
    dt2.whoAmI();
    dt3 = dt1;
    dt3.whoAmI();

    dt1.attack( "oolkay" );
    dt1.takeDamage( 10 );
    dt1.ScavTrap::takeDamage( 20 );
    dt1.beRepaired( 10 );

    return (0);
}