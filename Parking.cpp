#include "Parking.h"
void CarParking::parkVehicle()
{
    if (numVehicles >= 10)
    {
        cout << "Parking is full.\n";
        return;
    }

    int choice;
    while (true)
    {
        cout << "Select Vehicle Type: 1. Car 2. Bike 3. Bus: ";
        if (cin >> choice && (choice >= 1 && choice <= 3))
            break;
        else
        {
            cout << "Invalid choice. Please enter 1, 2, or 3.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    Vehicle *v = nullptr;
    if (choice == 1)
        v = new Car();
    else if (choice == 2)
        v = new Bike();
    else if (choice == 3)
        v = new Bus();

    v->inputDetails();
    parkedVehicles[numVehicles++] = v;

    cout << "Vehicle parked successfully.\n";
}

void CarParking::removeVehicle()
{
    if (numVehicles == 0)
    {
        cout << "No vehicles parked." << endl;
        return;
    }

    int id;
    cout << "Enter ID to remove: ";
    cin >> id;

    bool found = false;
    for (int i = 0; i < numVehicles; ++i)
    {
        if (parkedVehicles[i]->getID() == id)
        {
            cout<<"Vehicle type: "<<parkedVehicles[i]->getType()<<endl;
            calculateFee(id);
            delete parkedVehicles[i];
            for (int j = i; j < numVehicles - 1; ++j)
            {
                parkedVehicles[j] = parkedVehicles[j + 1];
            }
            numVehicles--;
            found = true;
            cout << "Vehicle removed.\n";
            break;
        }
    }
    if (!found)
    {
        cout << "Vehicle with ID " << id << " not found.\n";
    }
}

void CarParking::displayVehicles()
{
    if (numVehicles <= 0)
    {
        cout << "Parking is empty\n." << endl;
        return;
    }
    for (int i = 0; i < numVehicles; ++i)
    {
        cout << "\n ";
                parkedVehicles[i]
                    ->displayDetails();
        cout << "-------------------\n";
    }
}

void CarParking::searchByID()
{
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (int i = 0; i < numVehicles; ++i)
    {
        if (parkedVehicles[i]->getID() == id)
        {
            parkedVehicles[i]->displayDetails();
            return;
        }
    }
    cout << "Vehicle not found.\n";
}

void CarParking::calculateFee(int id)
{

    for (int i = 0; i < numVehicles; ++i)
    {
        if (parkedVehicles[i]->getID() == id)
        {
            string type = parkedVehicles[i]->getType();
            int fee = 0;

            if (type == "Car")
            {
                fee = 50;
            }
            else if (type == "Bus")
            {
                fee = 100;
            }
            else if (type == "Bike")
            {
                fee = 20;
            }

            cout << "Parking Fee: " << fee << endl;
            return;
        }
    }

    cout << "Vehicle not found for fee calculation.\n";
}
