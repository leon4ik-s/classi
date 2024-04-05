#ifndef AGENCY_H
#define AGENCY_H

#include <string>
#include <iostream>

class Agency {
private:
    std::string from_station;
    std::string to_station;

public:
    Agency(std::string _from_station, std::string _to_station);
    std::string getFrom() const;
    std::string getTo() const;
    void print() const;

    friend std::ostream& operator<<(std::ostream& os, const Agency& agency);
};

#endif // AGENCY_H
