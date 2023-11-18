#include "ScavTrap.hpp"

int main()
{
    ClapTrap    clapObj("Omer");
    ScavTrap    scavObj("Baha");

    clapObj.attack("Baha");
    std::cout << MAGENTA << "HP: " << clapObj.getHitPoints() << DEFAULT << std::endl;
    clapObj.takeDamage(5);
    std::cout << MAGENTA << "HP: " << clapObj.getHitPoints() << DEFAULT << std::endl;
    clapObj.beRepaired(2);
    std::cout << MAGENTA << "HP: " << clapObj.getHitPoints() << DEFAULT << std::endl;
    std::cout << std::string(60, '-') << std::endl << std::endl;


    ScavTrap obj2;
    scavObj.attack("Omer");
    std::cout << MAGENTA << "HP: " << scavObj.getHitPoints() << DEFAULT << std::endl;
    scavObj.takeDamage(5);
    std::cout << MAGENTA << "HP: " << scavObj.getHitPoints() << DEFAULT << std::endl;
    scavObj.beRepaired(2);
    std::cout << MAGENTA << "HP: " << scavObj.getHitPoints() << DEFAULT << std::endl;
    scavObj.guardGate();
}