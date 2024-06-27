#include "CommercialBuilding.h"

CommercialBuilding::CommercialBuilding(const std::string &address, int floors, int numOffices)
        : Building(address, floors), numOffices(numOffices) {}

int CommercialBuilding::getNumOffices() const {
    return numOffices;
}

void CommercialBuilding::setNumOffices(int numOffices) {
    this->numOffices = numOffices;
}

void CommercialBuilding::update() {
    numOffices += 1;
}
