#include <string>
#include "Contact.hpp"

#define DEFAULT "\033[0;39m"
#define GRAY "\033[0;90m"
#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        void addContact(int indx);
        void searchContact(int contactNumber);
};