#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::addContact(int indx)
{
    this->contacts[indx].setFname();
    this->contacts[indx].setSname();
    this->contacts[indx].setNname();
    this->contacts[indx].setSecret();
    this->contacts[indx].setNumber();
}

void handleField(std::string str)
{
    int len;

    len = str.length();
    std::cout << '|' << std::setw(10);
    if (len < 10)
        std::cout << str;
    else
        std::cout << std::string(str.begin(), str.begin() + 9)+'.';
}

void displayContacts(Contact list[], int indx)
{
    int i;

    i = 0;
    std::cout << ' ' << std::string(43, '_') << std::endl;
	std::cout << "|     Index|      Name|   Surname|  Nickname|\n";
    std::cout << ' ' << std::string(43, '-') << std::endl;
    while (i < indx)
    {
        std::cout << '|' << std::setw(10) << i;
        handleField(list[i].getFname());
        handleField(list[i].getSname());
        handleField(list[i].getNname());
        std::cout << '|' <<std::endl;
        std::cout << ' ' << std::string(43, '-') << std::endl;
        i++;
    }
}

void displayPerson(Contact person)
{
    std::cout << ' ' << std::string(21, '_') << std::endl;
	std::cout << "|      Name";
    handleField(person.getFname());
    std::cout << '|' <<std::endl;
    std::cout << ' ' << std::string(21, '-') << std::endl;
	std::cout << "|   Surname";
    handleField(person.getSname());
    std::cout << '|' <<std::endl;
    std::cout << ' ' << std::string(21, '-') << std::endl;
	std::cout << "|  Nickname";
    handleField(person.getNname());
    std::cout << '|' << std::endl;
    std::cout << ' ' << std::string(21, '-') << std::endl;
	std::cout << "|  D.Secret";
    handleField(person.getSecret());
    std::cout << '|' << std::endl;
    std::cout << ' ' << std::string(21, '-') << std::endl;
	std::cout << "|  P.Number";
    handleField(person.getNumber());
    std::cout << '|' << std::endl;
    std::cout << ' ' << std::string(21, '-') << std::endl;
}

void PhoneBook::searchContact(int indx)
{
    int i;

    if (indx == 0)
    {
        std::cout << "There is no contacts!" << std::endl;
        return ;
    }
    displayContacts(this->contacts, indx);
    std::cout << "Enter the index: ";
    std::cin >> i;

    while (i < 0 || i > indx)
    {
        std::cout << "Wrong index!" << std::endl;
        std::cin >> i;
    }
    displayPerson(this->contacts[i]);
}