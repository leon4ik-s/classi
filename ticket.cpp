#include "ticket.h"

Ticket::Ticket(std::string _name, unsigned short int _seat_number) : Passenger(_name), seat_number(_seat_number) {}

std::ostream& operator<<(std::ostream& os, const Ticket& ticket) {
    os << "Билет: " << static_cast<const Passenger&>(ticket) << ", Место №" << ticket.seat_number;
    return os;
}
