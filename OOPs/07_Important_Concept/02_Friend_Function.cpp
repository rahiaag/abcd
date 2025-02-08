/*

!Friend Function

A friend function is a function declared in a class but defined outside of it, which has access to the private and protected members of the class. Friend functions are not member functions of the class, but they are allowed to access private and protected data.

*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    // Friend function declaration
    friend int calculateArea(const Rectangle &r);
};

// Friend function definition
int calculateArea(const Rectangle &r)
{
    return r.width * r.height;
}

int main()
{
    Rectangle rect(5, 3);
    cout << "Area: " << calculateArea(rect) << endl; // Output: Area: 15

    return 0;
}
