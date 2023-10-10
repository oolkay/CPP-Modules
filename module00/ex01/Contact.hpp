#include <string>

class Contact
{
    private:
    std::string firstName;
    std::string secondName;
    std::string nickName;
    std::string darkestSecret;
    std::string number;
    public:
    void setFname();
    void setSname();
    void setNname();
    void setSecret();
    void setNumber();
    
    std::string getFname();
    std::string getSname();
    std::string getNname();
    std::string getSecret();
    std::string getNumber();
};