#include "vehicle.h"

int Vehicle::nextID = 1; // Static member initialization

void Vehicle::inputDetails()
{
    cin.ignore();
    cout << "Enter manufacturer name: ";
    do
    {
        getline(cin, manufName);
        if (manufName.empty())
        {
            cout << "Manufacturer name cannot be empty. Please enter again: ";
        }
    } while (manufName.empty());

    cout << "Enter color: ";
    do
    {
        getline(cin, color);
        if (color.empty())
        {
            cout << "Color cannot be empty. Please enter again: ";
        }
    } while (color.empty());

    cout << "Enter model: ";
    do
    {
        getline(cin, model);
        if (model.empty())
        {
            cout << "Model cannot be empty. Please enter again: ";
        }
    } while (model.empty());

    cout << "Enter fuel type (Petrol/Diesel): ";
    do
    {
        getline(cin, runType);
        if (runType.empty())
        {
            cout << "Fuel type cannot be empty. Please enter again: ";
        }
    } while (runType.empty());

    id = nextID++; // Assign and increment ID automatically

    while (true)
    {
        cout << "Enter number of wheels: ";
        if (cin >> wheels && wheels > 0)
            break;
        else
        {
            cout << "Invalid wheels. Please enter again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    while (true)
    {
        cout << "Enter number of doors: ";
        if (cin >> doors && doors >= 0)
            break;
        else
        {
            cout << "Invalid doors. Please enter again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    while (true)
    {
        cout << "Enter maximum speed: ";
        if (cin >> maxSpeed && maxSpeed > 0)
            break;
        else
        {
            cout << "Invalid speed. Please enter again.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
}

void Vehicle::displayDetails()
{
    cout << "Type: " << type << endl;
    cout << "Manufacturer: " << manufName << endl;
    cout << "Color: " << color << endl;
    cout << "Model: " << model << endl;
    cout << "Fuel Type: " << runType << endl;
    cout << "ID: " << id << endl;
    cout << "Wheels: " << wheels << endl;
    cout << "Doors: " << doors << endl;
    cout << "Max Speed: " << maxSpeed << endl;
}
