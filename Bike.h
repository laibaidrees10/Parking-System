#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
    Bike() { type = "Bike"; }
    void inputDetails() override {
        cout << "--- Enter Bike Details ---" << endl;
        Vehicle::inputDetails();
    }
    void displayDetails() override {
        cout << "--- Bike Details ---" << endl;
        Vehicle::displayDetails();
    }
};

#endif
