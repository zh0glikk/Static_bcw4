#include "Mohican.hpp"

Mohican::Mohican(std::string name) {
    this->name = name;
    Mohican::last = this;
}

Mohican::Mohican(Mohican& other) {
    this->name = other.name;
    Mohican::last = this;
}

Mohican& Mohican::operator=(const Mohican& other) {
    this->name = other.name;
    return *this;
}

std::string Mohican::getName() {
    return this->name;
}

Mohican* Mohican::last = nullptr;
