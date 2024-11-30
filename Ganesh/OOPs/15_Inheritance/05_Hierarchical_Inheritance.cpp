/*

Definition: Multiple classes inherit from the same base class.
Example: Dog and Cat both inherit from Animal.

*/

#include <iostream>
using namespace std;

class Animal
{
public:
    void flow()
    {
        cout << "Sound.." << endl;
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

class Cat : public Animal
{
public:
    void eat()
    {
        cout << " Meow Meow " << endl;
    }
};

class Mouse : public Animal
{
public:
    void sound()
    {
        cout << " ouch ouch " << endl;
    }
};

int main()
{
    Mouse obj;
    Cat obj1;
    obj.sound();
    obj.flow();
    obj1.eat();

    return 0;
}
