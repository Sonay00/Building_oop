#ifndef BUILDING_H
#define BUILDING_H

#include <string>

class Building {
protected:
    std::string address;
    int floors;

public:
    Building(const std::string &address, int floors);
    virtual ~Building() = default;

    std::string getAddress() const;
    int getFloors() const;

    void setAddress(const std::string &address);
    void setFloors(int floors);

    virtual void update() = 0;
};

#endif // BUILDING_H
