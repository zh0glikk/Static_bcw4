#include "Identifiable.hpp"

Identifiable::Identifiable() {
    Identifiable::lastId += 1;
    this->id = Identifiable::lastId;
}

Identifiable::Identifiable(Identifiable& other) {
    Identifiable::lastId += 1;
    this->id = Identifiable::lastId;
}

int Identifiable::getId() {
    return this->id;
}

Identifiable& Identifiable::operator=(const Identifiable& other) {
    return *this;
}

int Identifiable::lastId = 0;
