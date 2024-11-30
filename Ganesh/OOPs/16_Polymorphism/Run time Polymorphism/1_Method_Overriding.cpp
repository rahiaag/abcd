/*

!Runtime (Dynamic) Polymorphism:

- Achieved through method overriding.
- Method Overriding: A subclass provides a specific implementation of a method that is already defined in its superclass.
  The method in the superclass is overridden by the subclass.


  Virtual Class allow a subclass to override a method defined in a base class, and they ensure that the correct method is called for an object

Real Life Example

Imagine a company with different types of employees: full-time, part-time, and contractors. Each type calculates its salary differently.

!Base Class: Employee
- Virtual Function: calculateSalary() is defined in the Employee class to be overridden by derived classes.
!Derived Classes:
- FullTimeEmployee: Calculates salary based on an annual amount.
- PartTimeEmployee: Calculates salary based on hours worked.

*/

#include <iostream>
using namespace std;

class Vehicle
{
public:
   virtual void makeSound()
    {
        cout << "Vehicle makes a sound" << endl;
    }
};

class Car : public Vehicle
{
public:
    void makeSound()
    {
        cout << "Car honks" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void makeSound()
    {
        cout << "Bike revs" << endl;
    }
};

int main()
{

    Vehicle *myCar = new Car();
    Vehicle *myBike = new Bike();

    myCar->makeSound();  // Output: "Car honks"
    myBike->makeSound(); // Output: "Bike revs

    return 0;
}
