#include "Parking.h"

int main()
{
    CarParking parking;
    int choice;

    while (true)
    {
        cout << "\nParking System\n";
        cout << "1. Park Vehicle\n";
        cout << "2. Remove Vehicle\n";
        cout << "3. Display All Vehicles\n";
        cout << "4. Search by ID\n";
        cout << "5. Calculate Parking Fee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            parking.parkVehicle();
            break;
        case 2:
            parking.removeVehicle();
            break;
        case 3:
            parking.displayVehicles();
            break;

        case 4:
            parking.searchByID();
            break;
        case 5:
            int id;
            cout << "Enter ID to calculate fee: ";
            cin >> id;
            parking.calculateFee(id);
            break;
        case 6:
            cout << "Thank you!\n";
            return 0;
        default:
            cout << "Invalid choice.\n";
        }
    }
}
