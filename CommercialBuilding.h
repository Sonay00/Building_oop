#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

#include "Building.h"

class CommercialBuilding : public Building {
private:
    int numOffices;

public:
    CommercialBuilding(const std::string &address, int floors, int numOffices);

    int getNumOffices() const;
    void setNumOffices(int numOffices);

    void update() override;
};

#endif // COMMERCIALBUILDING_H
