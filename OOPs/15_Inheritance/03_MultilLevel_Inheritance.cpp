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
        cout << "Sound.." << endl;
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
};

class GermanShephard : public Dog
{
public:
    string color;

    GermanShephard(int type, string size, string breed, string color)
    {
        this->type = type;
        this->size = size;
        this->breed = breed;
        this->color = color;
    }
    void sleeping()
    {
        cout << "Sleeping.." << endl;
    }

    void display()
    {
        cout << "The type is " << type << endl;
        cout << "The size is " << size << endl;
        cout << "The Breed is " << breed << endl;
        cout << "The color is " << color << endl;
    }
};

int main()
{
    GermanShephard obj(2, "Large", "German Shephard", "Brown");
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