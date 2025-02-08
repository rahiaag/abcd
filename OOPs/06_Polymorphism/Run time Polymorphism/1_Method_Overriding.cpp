/*
Runtime (Dynamic) Polymorphism in C++  

- Achieved through method overriding.  
- A subclass provides a specific implementation of a method already defined in its superclass.  
- The method in the superclass is overridden by the subclass.  

Virtual Functions  
- Allow a subclass to override a method in a base class.  
- Ensure that the correct method is called for an object at runtime (even when using a base class pointer).  

Real-Life Example  
Imagine a company with different types of employees: full-time, part-time, and contractors. Each type calculates salary differently.  

Base Class: Employee  
- Contains a virtual function calculateSalary(), which is meant to be overridden.  

Derived Classes  
- FullTimeEmployee: Calculates salary based on an annual salary.  
- PartTimeEmployee: Calculates salary based on hours worked.  

Important Points About Method Overriding  
✔ The method in the derived class must have the same name, return type, and parameters as the method in the base class.  
✔ Inheritance is required—overriding happens only in derived classes.  
✔ Access specifier in the derived class must not be more restrictive than in the base class.  
✔ To enable runtime polymorphism, the base class method must be declared as virtual.  
❌ Constructors and destructors cannot be inherited, so they cannot be overridden.  
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
    void makeSound() override
    {
        cout << "Car honks" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void makeSound() override
    {
        cout << "Bike revs" << endl;
    }
};

int main()
{
    // Creating pointers of type Vehicle that point to objects of derived classes
    Vehicle *myCar = new Car();  // Pointer to Vehicle, but object is of type Car
    Vehicle *myBike = new Bike(); // Pointer to Vehicle, but object is of type Bike

    // Calling the virtual method using base class pointers will call the derived class methods
    myCar->makeSound();  // Output: "Car honks"
    myBike->makeSound(); // Output: "Bike revs"

    // Clean up dynamically allocated memory
    delete myCar;
    delete myBike;

    return 0;
}


//then how can we call the base class function

/* so basically we create a reference or a pointer of the base class and using that reference we create a dynamic object of the derived class ans using that we call the dereived class function 

for example

Vehicle *myCar=new Car();

here myCar is not an object but a pointer 
it is pointer to the object that will be created dynamically in the heap  
myCar is pointer to Vehical, but it points to an object of type Car allowing polymorphism and dynamic binding. the object is created using the new keyword

REMEMBER : myCar is not an object but pointer to an object of car
*/

/* if we dont use the virtual keyword

 If you use a base class pointer or reference to call a method, it will always call the method from the base class, even if the object is of a derived class.

There is no specific limit on how many virtual function a class can have
*/