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
    Person()
    {
        cout << "I am Person" << endl;
    }
    void introduce()
    {
        cout << "I am a person who is both a teacher and a musician." << endl;
    }
};

int main()
{
    Person p;
    p.introduce();
    p.teach();
    p.playInstrument();
    return 0;
}
