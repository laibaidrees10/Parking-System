#ifndef PARKING_H
#define PARKING_H

#include "Car.h"
#include "Bike.h"
#include "Bus.h"
#include <fstream>
#include <cmath>

class CarParking
{
private:
    Vehicle *parkedVehicles[10];
    int numVehicles;

public:
    CarParking()
    {
        numVehicles = 0;
    }

    void parkVehicle();
    void removeVehicle();
    void displayVehicles();
    void displayByType(string type);
    void searchByID();
    void calculateFee(int id);
    void saveToFile();
};

#endif