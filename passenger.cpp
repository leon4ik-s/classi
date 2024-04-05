#include "passenger.h"

Passenger::Passenger(std::string _name) : name(_name) {}

std::ostream& operator<<(std::ostream& os, const Passenger& passenger) {
    os << "Пассажир: " << passenger.name;
    return os;
}
