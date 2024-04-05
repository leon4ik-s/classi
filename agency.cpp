#include "agency.h"

Agency::Agency(std::string _from_station, std::string _to_station) : from_station(_from_station), to_station(_to_station) {}

std::string Agency::getFrom() const {
    return from_station;
}

std::string Agency::getTo() const {
    return to_station;
}

void Agency::print() const {
    std::cout << "Приятного пути в " << to_station << "! " << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Agency& agency) {
    os << "Из: " << agency.getFrom() << ", В: " << agency.getTo();
    return os;
}
