#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

//UpperCamelCase
//Orthodox Canonical Class Form
//A default constructor
//A copy constructor
//A destructor
//An assignation operator overload
#include <string>
#include <iostream>

#define DEFAULT "\033[0;39m"
#define GRAY "\033[0;90m"
#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &clapTrap);
        ClapTrap& operator=(const ClapTrap &ct);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int getHitPoints() const;
        ~ClapTrap();
    private:
        std::string _name;
        int _hitPoints;     //HP
        int _energyPoints; 
        int _attackDamage; 
};
#endif