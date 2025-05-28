#include<bits/stdc++.h>
using namespace std;

/*
A copy constructor is a special type of constructor that creates a new object as an exact copy of an existing object.
✔ It ensures that the new object gets the same values as the original.
✔ Changes to the original object do not affect the copied object (they are separate).
*/

class Number {
    int a;

public:
    // Default constructor
    Number() { a = 0; }

    // Parameterized constructor
    Number(int num) { a = num; }

    // Copy constructor (creates a copy of an existing object)
    Number(Number &obj) {  
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;  
    }

    void display() {
        cout << "The number for this object is " << a << endl;
    }
};

int main() {
    Number x, z(45);  // x = 0 (default constructor), z = 45 (parameterized constructor)
    x.display();  // Output: 0
    z.display();  // Output: 45

    Number z1(z);  // Copy constructor invoked (z1 gets the same value as z)
    z1.display();  // Output: 45

    return 0;
}
