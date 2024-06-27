#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

#include "Building.h"

class ResidentialBuilding : public Building {
private:
    int numResidents;

public:
    ResidentialBuilding(const std::string &address, int floors, int numResidents);

    int getNumResidents() const;
    void setNumResidents(int numResidents);

    void update() override;
};

#endif // RESIDENTIALBUILDING_H
