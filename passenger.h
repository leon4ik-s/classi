#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
#include <iostream>

class Passenger {
private:
    std::string name;

public:
    Passenger(std::string _name);

    friend std::ostream& operator<<(std::ostream& os, const Passenger& passenger);
};

#endif // PASSENGER_H
