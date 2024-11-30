/*

Real Life Example

Example: Animal and Dog
A Dog class inherits from an Animal class.

Definition: A class inherits from only one base class.


*/

// Base Class

#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
        cout << "Hello Human" << endl;
    }
    void work()
    {
        cout << "I am Working " << endl;
    }
};

// Derieved Class

class Student : public Human
{
    int roll_no;
    int fees;

public:
    Student()
    {
        cout << "Hello Student" << endl;
    }
    Student(string name, int age, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void show()
    {
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
        cout << "Roll No is " << roll_no << endl;
        cout << "Fees is " << fees << endl;
    }
};

int main()
{
    Student A("Rahi", 32, 3145, 2000);
    A.work();
    A.show();

    //  Student B;

    return 0;
}