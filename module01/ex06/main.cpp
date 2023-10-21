#include "Harl.hpp"
#include <iostream>

int loglevels( std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            return (i);
    return (-1);
}

int printlogs ( std::string level, Harl harl)
{
    int n = loglevels(level);
    switch (n)
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return (-1);
    }
    return (1);

}

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (-1);
    }
    printlogs(argv[1], harl);
    return (1);
}