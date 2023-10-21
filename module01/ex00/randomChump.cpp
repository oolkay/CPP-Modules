#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie newzomb;

    newzomb.setZombieName ( name );
    newzomb.announce();
}