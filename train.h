#ifndef TRAIN_H
#define TRAIN_H

#include "agency.h"

class Train : public Agency {
protected: // Изменили private на protected
    unsigned short int num_van;

public:
    Train(std::string _from_station, std::string _to_station, unsigned short int _num_van);
    void printnum() const;

    friend std::ostream& operator<<(std::ostream& os, const Train& train);
};

#endif // TRAIN_H
