#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle
{
public:
    Car() { type = "Car"; }
    void inputDetails() override
    {
        cout << "--- Enter Car Details ---" << endl;
        Vehicle::inputDetails();
    }
    void displayDetails() override
    {
        cout << "--- Car Details ---" << endl;
        Vehicle::displayDetails();
    }
};

#endif
