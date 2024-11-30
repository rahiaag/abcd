/*

Definition: A combination of two or more types of inheritance (e.g., multiple and multilevel).
Example: Dog inherits from Mammal (which inherits from Animal), and also from Pet.

*/

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called" << endl;
    }
    void show() {
        cout << "This is a Vehicle" << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor called" << endl;
    }
    void show() {
        cout << "This is a Car" << endl;
    }
};

// Derived class 2
class Boat : public Vehicle {
public:
    Boat() {
        cout << "Boat constructor called" << endl;
    }
    void show() {
        cout << "This is a Boat" << endl;
    }
};

// Derived class 3 using multiple inheritance
class AmphibiousVehicle : public Car, public Boat {
public:
    AmphibiousVehicle() {
        cout << "AmphibiousVehicle constructor called" << endl;
    }
    void show() {
        cout << "This is an Amphibious Vehicle" << endl;
    }
};

int main() {
    AmphibiousVehicle av;
    av.show();
    
    return 0;
}
