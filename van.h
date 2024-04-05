#ifndef VAN_H
#define VAN_H

#include "train.h"

class Van : public Train {
private:
    unsigned short int num_seat;

public:
    Van(std::string _from_station, std::string _to_station, unsigned short int _num_van, unsigned short int _num_seat);

    friend std::ostream& operator<<(std::ostream& os, const Van& van);
};

#endif // VAN_H
