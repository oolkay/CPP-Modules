#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    int indx;
    PhoneBook pb;
    std::string op;

    indx = 0;
    while (true)
    {
        std::cout << "Enter the operation: ";
        std::cin >> op;
        if (op.compare("add") == 0)
        {
            pb.addContact(indx);
            indx++;
        }
        else if (op.compare("search") == 0)
        {
            pb.searchContact(indx);
        }
        else if (op.compare ("exit") == 0)
            break;
        else
            std::cout << "Invalid operation" << std::endl;
    }
    return (0);
}