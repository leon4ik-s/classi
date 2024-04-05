#include "train.h"

Train::Train(std::string _from_station, std::string _to_station, unsigned short int _num_van) : Agency(_from_station, _to_station), num_van(_num_van) {}

void Train::printnum() const {
    std::cout << "Ваш вагон под номером " << num_van << "! " << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Train& train) {
    os << "Поезд: " << train.getFrom() << " - " << train.getTo() << ", Вагон №" << train.num_van;
    return os;
}
