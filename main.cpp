#include <iostream>
#include "agency.h"
#include "train.h"
#include "van.h"
#include "passenger.h"
#include "ticket.h"

int main() {
    setlocale(LC_ALL, "Russian");

    Van van1("Ружино", "Владивосток", 3, 15);
    std::cout << van1 << std::endl;

    Passenger passenger1("Иван Иванов");
    std::cout << passenger1 << std::endl;

    Ticket ticket1("Петр Петров", 25);
    std::cout << ticket1 << std::endl;

    return 0;
}
