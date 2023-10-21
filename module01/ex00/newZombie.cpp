#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
    Zombie *newzomb;

    newzomb = new Zombie;
    newzomb->setZombieName ( name );
    return (newzomb);
}