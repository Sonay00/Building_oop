#include "ResidentialBuilding.h"

ResidentialBuilding::ResidentialBuilding(const std::string &address, int floors, int numResidents)
        : Building(address, floors), numResidents(numResidents) {}

int ResidentialBuilding::getNumResidents() const {
    return numResidents;
}

void ResidentialBuilding::setNumResidents(int numResidents) {
    this->numResidents = numResidents;
}

void ResidentialBuilding::update() {
    numResidents += 1;
}
