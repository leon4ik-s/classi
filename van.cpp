#include "van.h"

Van::Van(std::string _from_station, std::string _to_station, unsigned short int _num_van, unsigned short int _num_seat) : Train(_from_station, _to_station, _num_van), num_seat(_num_seat) {}

std::ostream& operator<<(std::ostream& os, const Van& van) {
    os << "Ванная машина: " << van.getFrom() << " - " << van.getTo() << ", Вагон №" << van.num_van << ", Место №" << van.num_seat;
    return os;
}
