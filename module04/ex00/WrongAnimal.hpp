#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &copy);
        std::string getType() const;
        void makeSound() const;
    protected:
        std::string _type;
};

#endif
