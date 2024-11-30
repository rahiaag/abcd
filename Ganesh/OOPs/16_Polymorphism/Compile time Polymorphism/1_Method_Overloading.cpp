/*

Polymorphism is a key concept in object-oriented programming (OOP) that allows objects of different classes to be treated as objects of a common super class. It's derived from the Greek words "poly" (many) and "morph" (form), meaning "many forms."

Key Concepts of Polymorphism:
!Compile-time (Static) Polymorphism:

- Achieved through method overloading or operator overloading.
- Method Overloading: Multiple methods in the same class share the same name but differ in the number or type of their parameters.
- Operator Overloading: Same operator is used to perform different operations based on the context.


*/

#include <iostream>
using namespace std;

class Math
{
    public:

    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {           
        return a + b + c;
    }
};

int main()
{
    Math obj;
    cout<<obj.add(3, 4);
    cout<<endl;
    cout<<obj.add(2, 5, 6);
}
