#include "Building.h"

Building::Building(const std::string &address, int floors) : address(address), floors(floors) {}

std::string Building::getAddress() const {
    return address;
}

int Building::getFloors() const {
    return floors;
}

void Building::setAddress(const std::string &address) {
    this->address = address;
}

void Building::setFloors(int floors) {
    this->floors = floors;
}
