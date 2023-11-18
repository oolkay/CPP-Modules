#include "ClapTrap.hpp"

int main()
{
    ClapTrap    clapObj("Omer");
    ClapTrap    clapObj2(clapObj);
    ClapTrap    clapObj3("Baha");
    ClapTrap    clapObj4 = clapObj3;
    clapObj.attack("Baha");
    std::cout << MAGENTA << "HP: " << clapObj2.getHitPoints() << DEFAULT << std::endl;
    clapObj.takeDamage(200);
    std::cout << MAGENTA << "HP: " << clapObj.getHitPoints() << DEFAULT << std::endl;
    clapObj.beRepaired(2);
    std::cout << MAGENTA << "HP: " << clapObj.getHitPoints() << DEFAULT << std::endl;
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
    // clapObj3.attack("air");
}