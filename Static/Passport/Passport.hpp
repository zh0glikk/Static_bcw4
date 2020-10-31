#ifndef Passport_hpp
#define Passport_hpp

#include "Date.h"

#define MAX_ID 999999

class Passport {
private:
    Date birth;
    std::string name;
    std::string surname;
    
    int id;
    std::pair<char, char> ser;
public:
    Passport(std::string name,std::string surname, Date birth = Date(12, 9, 2001));
    ~Passport();
    
    Date getBirth();
    std::string getName();
    std::string getSurname();
    
    int getId();
    std::pair<char, char> getSer();
    void setSer(std::pair<char, char> ser, int newId = 1);
    
    static int lastId;
    static std::pair<char, char> lastSer;
};



#endif /* Passport_hpp */
