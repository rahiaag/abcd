/*

Definition: Multiple classes inherit from the same base class.
Example: Dog and Cat both inherit from Animal.

*/

#include <iostream>
using namespace std;

class Animal
{
public:
    void makeSound() // It is a function not a constructor
    {
        cout << "Animal sound.." << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Bark Bark" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() 
    {
        cout << "Meow Meow" << endl;
    }
};

class Mouse : public Animal
{
public:
    void makeSound() 
    {
        cout << "Ouch Ouch" << endl;
    }
};

int main()
{
    Mouse obj;
    Cat obj1;

    obj.makeSound();  // Calls Mouse's makeSound()
    obj1.makeSound(); // Calls Cat's makeSound()

    return 0;
}
