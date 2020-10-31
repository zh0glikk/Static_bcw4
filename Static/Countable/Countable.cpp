#include "Countable.hpp"

int Countable::amount = 0;

Countable::Countable() {
    Countable::amount += 1;
}

Countable::Countable(Countable& other) {
    Countable::amount += 1;
}

