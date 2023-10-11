#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void usage()
{
    std::cout << GREEN;
    std::cout << std::string(10,'-');
    std::cout << "Usage" << std::string(10, '-') << std::endl;
    std::cout << "ADD: Add a new contact" << std::endl;
    std::cout << "SEARCH: Search a contact" << std::endl;
    std::cout << "EXIT: Exit the program" << std::endl;
    std::cout << std::string(25,'-') << std::endl;
    std::cout << DEFAULT;
}

int main()
{
    int indx;
    PhoneBook pb;
    std::string op;

    indx = 0;
    usage();
    while (true)
    {
        std::cout << BLUE << "\nEnter the operation > ";
        std::cin >> op;
        if (op.compare("ADD") == 0)
        {
            pb.addContact(indx);
            indx++;
        }
        else if (op.compare("SEARCH") == 0)
        {
            pb.searchContact(indx);
        }
        else if (op.compare ("EXIT") == 0)
            break;
        else
            std::cout << RED << "Invalid operation" << DEFAULT <<std::endl;
    }
    return (0);
}