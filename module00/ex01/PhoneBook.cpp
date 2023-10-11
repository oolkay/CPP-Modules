#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::addContact(int indx)
{
    std::cout << "\n\n";
    std::cout << MAGENTA;
    this->contacts[indx % 8].setFname();
    this->contacts[indx % 8].setSname();
    this->contacts[indx % 8].setNname();
    this->contacts[indx % 8].setNumber();
    this->contacts[indx % 8].setSecret();
    std::cout << DEFAULT;
    std::cout << "\n\n";
}

void handleField(std::string str)
{
    int len;

    len = str.length();
    std::cout << '|';
    std::cout << std::setw(10); //stream manipulator, streaming genişliği 10 karakter olacak
    if (len < 10)
        std::cout << str;
    else
        std::cout << std::string(str.begin(), str.begin() + 9)+'.';
}

void displayContacts(Contact list[], int indx)
{
    int i;

    i = 0;
    std::cout << MAGENTA;
    std::cout << ' ' << std::string(43, '_') << std::endl;
	std::cout << "|     Index|      Name|   Surname|  Nickname|\n";
    std::cout << ' ' << std::string(43, '-') << std::endl;
    if (indx > 8)
        indx = 8;
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
    std::cout << DEFAULT;
}

void displayPerson(Contact person)
{
    std::cout << MAGENTA;
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
    std::cout << DEFAULT;
}

void PhoneBook::searchContact(int contactNumber)
{
    int i;


    std::cout << "\n\n";
    if (contactNumber == 0)
    {
        std::cout << "There is no contacts!" << std::endl;
        return ;
    }
    displayContacts(this->contacts, contactNumber);
    std::cout << "Enter the index: ";
    std::cin >> i;

    while (i < 0 || i >= 8 || i >= contactNumber)
    {
        std::cout << "Wrong index!" << std::endl;
        std::cout << "Enter the index: ";
        std::cin >> i;
    }
    displayPerson(this->contacts[i]);
    std::cout << "\n\n";
}