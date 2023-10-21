#include "Harl.hpp"
#include <string>

int main( void )
{
    Harl harl;

    harl.complain(std::string("DEBUG"));
    harl.complain(std::string("INFO"));
    harl.complain(std::string("WARNING"));
    harl.complain(std::string("ERROR"));
    return (0);
}