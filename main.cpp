#include <iostream>
#include <vector>
#include "ResidentialBuilding.h"
#include "CommercialBuilding.h"

int main() {
    std::vector<Building*> buildings;

    ResidentialBuilding *residential = new ResidentialBuilding("123 Main St", 5, 20);
    CommercialBuilding *commercial = new CommercialBuilding("456 Market St", 10, 50);

    buildings.push_back(residential);
    buildings.push_back(commercial);

    for (const auto &building : buildings) {
        std::cout << "Address: " << building->getAddress() << ", Floors: " << building->getFloors() << std::endl;
    }

    for (auto &building : buildings) {
        building->update();
    }

    for (const auto &building : buildings) {
        std::cout << "Address: " << building->getAddress() << ", Floors: " << building->getFloors() << std::endl;
    }

    for (auto &building : buildings) {
        delete building;
    }

    return 0;
}
