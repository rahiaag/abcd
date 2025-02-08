/*
Special type of constructor that creates a copy of an existing object. it makes a new object that is a exact copy of the original object,with the same attribute and values

Use ful when duplicate an object an object without changing the original one,creating a backup of object before modifying it

When we use a copy constructor to create a copy of an object any changes made to the orignal object do not affect thte copied object
they are two separate object with their own distinct existence
*/

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, z(45);
    x.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    return 0;
}