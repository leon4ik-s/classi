#ifndef TICKET_H
#define TICKET_H

#include "passenger.h"

class Ticket : public Passenger {
private:
    unsigned short int seat_number;

public:
    Ticket(std::string _name, unsigned short int _seat_number);

    friend std::ostream& operator<<(std::ostream& os, const Ticket& ticket);
};

#endif // TICKET_H
