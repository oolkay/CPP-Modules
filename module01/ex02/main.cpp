#include <iostream>
#include <string>
#include <iomanip>
#include <new>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory adress of the string variable: " << &str << std::endl;
    std::cout << "Memory adress held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory adress held by stringREF: " << &stringREF << std::endl;
    std::cout << "\n\n";
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
    return (0);
}