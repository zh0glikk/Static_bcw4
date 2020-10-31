#include "Passport.hpp"

Passport::Passport(std::string name, std::string surname, Date birth) {
    Passport::lastId += 1;
    if ( Passport::lastId > MAX_ID ) {
        Passport::lastId = 1;
        
        if ( Passport::lastSer.second < 'Z') {
            Passport::lastSer.second += 1;
        } else {
            Passport::lastSer.second = 'A';
            Passport::lastSer.first += 1;
        }
    }
    this->id = Passport::lastId;
    this->ser = Passport::lastSer;
    this->birth = birth;
    this->name = name;
    this->surname = surname;
    
    
}

Passport::~Passport() {
    
}

Date Passport::getBirth() {
    return this->birth;
}

std::string Passport::getName() {
    return this->name;
}

std::string Passport::getSurname() {
    return this->surname;
}

int Passport::getId() {
    return this->id;
}

std::pair<char, char> Passport::getSer() {
    return this->ser;
}

//std::string Passport::getSeries() {
//    return this->series;
//}

//void Passport::setSeries(std::string series, int newId) {
//    Passport::lastId = newId;
//    Passport::lastSeries = series;
//
//    this->series = series;
//    this->id = Passport::lastId;
//}

void Passport::setSer(std::pair<char, char> ser, int newId) {
    Passport::lastId = newId;
    Passport::lastSer = ser;
    
    this->ser = Passport::lastSer;
    this->id = Passport::lastId;
}

int Passport::lastId = 0;
//std::string Passport::lastSeries = "AA";
std::pair<char, char> Passport::lastSer {'A', 'A' };

