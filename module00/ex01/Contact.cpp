#include "Contact.hpp"
#include <iostream>
#include <string>

void    Contact::setFname()
{
    std::string tmp;
    std::getline(std::cin, tmp);
    std::cout << "Enter the first name: ";
    std::getline(std::cin, this->firstName);
}

void    Contact::setSname()
{
    std::cout << "Enter the second name: ";
    std::getline(std::cin, this->secondName);
}

void    Contact::setNname()
{
    std::cout << "Enter the nickname: ";
    std::getline(std::cin, this->nickName);
}

void    Contact::setSecret()
{
    std::cout << "Enter the darkest secret: ";
    std::getline(std::cin, this->darkestSecret);
}

void    Contact::setNumber()
{
    std::cout << "Enter the number: ";
    std::getline(std::cin, this->number);
}

std::string Contact::getFname()
{
    return (this->firstName);
}

std::string Contact::getSname()
{
    return (this->secondName);
}

std::string Contact::getNname()
{
    return (this->nickName);
}

std::string Contact::getSecret()
{
    return (this->darkestSecret);
}

std::string Contact::getNumber()
{
    return (this->number);
}