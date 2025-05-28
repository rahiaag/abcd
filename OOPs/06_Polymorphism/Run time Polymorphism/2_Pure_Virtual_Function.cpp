/*
!Pure Virtual Function
A pure virtual function is a method in a base class that is declared with = 0 and does not have an implementation. It must be overridden by derived classes, making the base class abstract and preventing it from being instantiated directly.

!Use Case
Pure virtual functions are useful when you want to define a common interface in a base class that all derived classes must implement, but you don't want to provide a default implementation. It ensures that the derived classes provide their own specific behavior for that function.

!Real Life Example
 You have a base class Animal that represents various animals. Since each animal makes a different sound, you declare a pure virtual function makeSound() in the Animal class. Each derived class (specific animal) must provide its own implementation of this function.

!Abstract Class
 An abstract class is a class that cannot be instantiated on its own and is meant to be a base class for other classes. It can include both abstract methods (pure virtual functions) and we cannot create object of that class

 Use of abstract class
 - it act as a bluerprint for the derieved class
 - Used when multiple derived classes share a common behavior but have different implementations.
 - it supports run time polymorphism
 - it makes it necessary for the derieved to be implemented means there should be implementation for every derieved class
 - Prevents instantiation of the base class while allowing object creation for derived classes.

 !Interface
 - an interface is a special type of abstract class that contains only pure virtual functions and no data members or concrete (implemented) methods
 -it provide a way to achieve polymorphism
 - define a common base class for a group of related classes

✔ Contains only pure virtual functions (= 0).
✔ No data members (except constants, if needed).
✔ Derived classes must implement all functions.
✔ Cannot be instantiated.
✔ Used for multiple inheritance in C++.

*/
#include <iostream>
using namespace std;


// Interface
class Animal
{
public:

    virtual void sound() = 0; // Abstract Class
   // virtual void connect() = 0;   // Pure virtual function
  //  virtual void disconnect() = 0;  // Pure virtual function
    //virtual ~Animal() {}  // Virtual destructor for proper cleanup

    // This is creating problem because other virtual classes does not be implemented so we need to comment them
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    Animal *obj;     
    obj = new Dog(); 
    obj->sound();  // Output will be "Bark" because of runtime polymorphism

    // Parent Class can store the address of child class
    Dog *obj1;
    obj1 = new Dog();
    obj1->sound();  // Output will be "Bark"

    Dog obj3;
    obj3.sound();  // Output will be "Bark"

    // Memory cleanup (good practice)
    delete obj;   // delete dynamically allocated memory
    delete obj1;  // delete dynamically allocated memory

    return 0;
}
