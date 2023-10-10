#include <iostream>
#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG] This is a debug message" << std::endl;
}
void Harl::info( void )
{
    std::cout << "[INFO] This is an info message" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[WARNING] This is a warning message" << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ERROR] This is an error message" << std::endl;
}
void Harl::complain( std::string level )
{
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*ptr[i])();
            break;
        }
    }
}