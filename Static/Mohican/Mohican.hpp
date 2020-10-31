#ifndef Mohican_hpp
#define Mohican_hpp

#include <iostream>

class Mohican {
private:
    std::string name;
public:
    Mohican(std::string name = "Armen");
    Mohican(Mohican& other);
    
    Mohican& operator=(const Mohican& other);
    
    std::string getName();
    
    static Mohican* last;
};

#endif /* Mohican_hpp */
