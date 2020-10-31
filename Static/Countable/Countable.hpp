#ifndef Countable_hpp
#define Countable_hpp

class Countable {
public:
    Countable();
    Countable(Countable& other);
    
    static int amount;
};

#endif /* Countable_hpp */
