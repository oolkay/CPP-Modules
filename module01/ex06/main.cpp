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
    while (n < 4)
    {
        switch (n)
        {
            case 0:
                harl.complain("DEBUG");
                break;
            case 1:
                harl.complain("INFO");
                break;
            case 2:
                harl.complain("WARNING");
                break;
            case 3:
                harl.complain("ERROR");
                break;
            default:
                std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
                return (-1);
        }
        n++;
    }
    return (1);

}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (-1);
    } 
    else
    {
        Harl harl;
        printlogs(argv[1], harl);
        return (1);
    }
}