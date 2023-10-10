#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        void addContact(int indx);
        void searchContact(int indx);
};