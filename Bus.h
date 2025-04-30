#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus() { type = "Bus"; }
    void inputDetails() override {
        cout << "--- Enter Bus Details ---" << endl;
        Vehicle::inputDetails();
    }
    void displayDetails() override {
        cout << "--- Bus Details ---" << endl;
        Vehicle::displayDetails();
    }
};

#endif
