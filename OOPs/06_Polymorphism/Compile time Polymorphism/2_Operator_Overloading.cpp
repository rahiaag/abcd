/*
🔹 Operator Overloading in C++

Operator overloading allows you to define custom behavior for operators (like +, -, *) when used with your own classes.

🚫 Operators that **cannot** be overloaded:
- Scope Resolution Operator (::)
- Sizeof Operator (sizeof)
- Conditional Operator (?:)

🔹 Scope Resolution Operator (::)
- Used to access a variable, function, or class defined in a specific scope.
- Helps in distinguishing between local and global scope or between base and derived class members.
*/

#include <iostream>
using namespace std;

class Complex{
public:
    int real, img;

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    Complex operator+(Complex &obj)
    {
        return Complex(real + obj.real, img + obj.img);
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex C1(3, 4);
    Complex C2(5, 6);

    Complex C3 = C1 + C2; // same as C1.func(C2)  func here is any funciton which we write to add two complex Number

    C3.display();

    return 0;
}
