#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    string gender;
    int id;

    Human()
    {
        cout << "I am Human Constructor" << endl;
    }

    ~Human()
    {
        cout << "I am Human Destructor" << endl;
    }
};

class Doctor : public Human
{
public:
    string specilization;
    int fees;

    Doctor()
    {
        cout << "I am a Doctor Constructor" << endl;
    }

    ~Doctor()
    {
        cout << "I am a Doctor Destructor" << endl;
    }
};

class Patient : public Doctor
{
public:
    string disease;

    Patient()
    {
        cout << "I am a Patient Constructor" << endl;
    }

    ~Patient()
    {
        cout << "I am a Patient Destructor" << endl;
    }
};

int main()
{
    Patient A;
    return 0;
}

/*
Constructor Order:

- The base class (Base) constructor is called first.
- Then, the derived class (Derived) constructor is called.

Destructor Order:

- The derived class (Derived) destructor is called first.
- Then, the base class (Base) destructor is called.
*/