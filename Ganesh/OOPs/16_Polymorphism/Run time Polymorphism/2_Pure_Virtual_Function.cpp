/*
!Pure Virtual Function
A pure virtual function is a method in a base class that is declared with = 0 and does not have an implementation. It must be overridden by derived classes, making the base class abstract and preventing it from being instantiated directly.


!Real Life Example
 You have a base class Animal that represents various animals. Since each animal makes a different sound, you declare a pure virtual function makeSound() in the Animal class. Each derived class (specific animal) must provide its own implementation of this function.

!Abstract Class
 An abstract class is a class that cannot be instantiated on its own and is meant to be a base class for other classes. It can include both abstract methods (pure virtual functions) and we cannot create object of that class

*/

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0; // Abstract Class
};
// we cannot create the direct object of Pure Virutal function as this is now a abstract class

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
    Animal *obj;     // ouput will be Meow Meow as it decide in compile time (Without using virtual Function)
    obj = new Dog(); // When we use virtual then output will be Bark as it will then decide in RunTime
    obj->sound();

    // Parent Class can store the address of child class
    Dog *obj1;
    obj1 = new Dog();
    obj1->sound();

    Dog obj3;
    obj3.sound();

    return 0;
}

