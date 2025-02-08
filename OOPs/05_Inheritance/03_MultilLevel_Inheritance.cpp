/*

A class is derived from a class that is itself derived from another class.

Example: Animal → Mammal → Dog
A Mammal class inherits from Animal, and a Dog class inherits from Mammal

*/

#include <iostream>
using namespace std;

class Animal
{
public:
    int type;
    string size;

    void sound()
    {
        cout << "Making a sound.." << endl;
    }
};

class Dog : public Animal
{
protected:
    string breed;

public:
    void eat()
    {
        cout << "Eating.." << endl;
    }

    // Setter for breed (to modify it safely)
    void setBreed(string b)
    {
        breed = b;
    }

    string getBreed()
    {
        return breed;
    }
};

class GermanShepherd : public Dog
{
public:
    string color;

    // Using constructor initialization list
    GermanShepherd(int type, string size, string breed, string color)
        : color(color) // Initialize color directly
    {
        this->type = type;
        this->size = size;
        this->breed = breed;
    }

    void sleeping()
    {
        cout << "Sleeping.." << endl;
    }

    void display()
    {
        cout << "Type: " << type << endl;
        cout << "Size: " << size << endl;
        cout << "Breed: " << breed << endl;
        cout << "Color: " << color << endl;
    }
};

int main()
{
    GermanShepherd obj(2, "Large", "German Shephard", "Brown");
    obj.display();
    cout << endl;
    obj.sound();
    obj.eat();
    obj.sleeping();
    obj.type = 23;
    // obj.breed="oracle";  // It can't be change as it is Protected
    obj.display();

    return 0;
}