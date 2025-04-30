#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string type;
    int wheels, doors, id;
    string manufName, color, model, runType;
    int maxSpeed;

public:
    static int nextID;
    Vehicle() {}
    virtual ~Vehicle() {}

    virtual void inputDetails();
    virtual void displayDetails();
    
    int getID()
    {
        return id;
    }

    string getType()
    {
        return type;
    }

    int getWheels()
    {
        return wheels;
    }

    int getDoors()
    {
        return doors;
    }

    string getManufName()
    {
        return manufName;
    }

    string getColor()
    {
        return color;
    }

    string getModel()
    {
        return model;
    }

    string getRunType()
    {
        return runType;
    }

    int getMaxSpeed()
    {
        return maxSpeed;
    }
};

#endif
