# Parking System 🚗🚌🏍️

A simple Car Parking System developed in C++ using Object-Oriented Programming (OOP) concepts. It allows users to park, remove, search, and calculate parking fees for vehicles easily.

# ✨ Features

* Park Vehicle (Car, Bus, Bike)

* Remove Vehicle by ID

* Display All Parked Vehicles

* Search Vehicle by ID

* Calculate Parking Fee based on Vehicle Type

* Auto-Generated Unique ID for every vehicle

* Input Validation for string and numeric inputs

# 📚 Technologies Used

* C++

* Object-Oriented Programming (Classes, Inheritance)

* Dynamic Memory Management

# 🏛️ Folder Structure

* main.cpp --- Main menu and user interface
* Parking.cpp --- Parking system logic
* vehicle.cpp --- Base vehicle class
* Parking.h
* vehicle.h
* car.h --- Header and definition of Car class
* bus.h --- Header and definition of Bus class
* bike.h --- Header and definition of Bike class
* README.md --- Project documentation

# 🚀 How to Compile and Run

* Open terminal in the project directory.

* Compile using g++:

       g++ main.cpp Parking.cpp Vehicle.cpp -o parkingApp
* Run the program:

      ./parkingApp.exe
# 📋 How Parking Fee is Calculated

* Vehicle Type Fee
     * Car: 50
     * Bus: 100
     * Bike: 20
