#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap ftrap;
    FragTrap ftrap2("omer");
    ftrap.attack("baha");
    ftrap.takeDamage(10);
    ftrap.takeDamage(10);
    std::cout << ftrap.getHitPoints() << std::endl;
    ftrap.beRepaired(10);
    std::cout << ftrap.getHitPoints() << std::endl;
    ftrap.highFivesGuys();
    ftrap2.highFivesGuys();
}