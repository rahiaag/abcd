/*

Definition: A class inherits from more than one base class.
Example: Person inherits from both Teacher and Musician.

2 Base Class and 1 Derieved Class

*/

#include <iostream>
using namespace std;

class Teacher
{
public:
    Teacher()
    {
        cout << "I am Teacher" << endl;
    }
    void teach()
    {
        cout << "Teaching students..." << endl;
    }
};

class Musician
{
public:
    Musician()
    {
        cout << "I am Musician" << endl;
    }
    void playInstrument()
    {
        cout << "Playing an instrument..." << endl;
    }
};

// Derived class using multiple inheritance
class Person : public Musician, public Teacher
{
public:
    // Person() : Teacher(), Musician()  // Explicit constructor initialization
    Person()
    {
        cout << "I am a person who is both a teacher and a musician." << endl;
    }
};

int main()
{
    Person p;
    p.teach();
    p.playInstrument();
    return 0;
}
