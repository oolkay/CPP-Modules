#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap ftrap;
    FragTrap ftrap2("omer");
    ftrap.attack("baha");
    ftrap.takeDamage(30);
    std::cout << MAGENTA << ftrap.getHitPoints() << DEFAULT <<std::endl;
    ftrap.beRepaired(10);
    ftrap.beRepaired(10);
    ftrap.beRepaired(10);
    ftrap.beRepaired(10);
    ftrap.beRepaired(10);
    std::cout << MAGENTA <<  ftrap.getHitPoints() << DEFAULT << std::endl;
    ftrap.highFivesGuys();
    ftrap2.highFivesGuys();
}