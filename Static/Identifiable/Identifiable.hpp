#ifndef Identifiable_hpp
#define Identifiable_hpp

class Identifiable {
private:
    int id;
public:
    Identifiable();
    Identifiable(Identifiable& other);
    
    int getId();
    Identifiable& operator=(const Identifiable& other);
    
    static int lastId;
};

#endif /* Identifiable_hpp */
