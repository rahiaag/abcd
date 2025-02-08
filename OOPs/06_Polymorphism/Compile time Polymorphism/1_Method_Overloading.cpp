/*
🔹 Polymorphism in OOP  

Polymorphism allows the same function or operator to behave differently based on the context.  
It comes from the Greek words "poly" (many) and "morph" (form), meaning "many forms."

✨ Types of Polymorphism:

1️⃣ Compile-time (Static) Polymorphism:  
   - Achieved through Method Overloading and Operator Overloading.  

   ✅ Method Overloading:  
   - Multiple functions in the same class share the same name but differ in:
     - The number of parameters.
     - The types of parameters.
     - The order of parameters (even if data types are the same).  
   - Works within the same class.  
   - Constructor overloading is also allowed.

   ✅ Operator Overloading:  
   - Allows the same operator to perform different operations based on the context.

❌ What is NOT considered Method Overloading?  
   - If two functions have identical parameters (same number, type, and order) but differ only in return type, it is not method overloading.
*/


#include <iostream>
using namespace std;

// Example 1 Number of Parameter Different (Will be Consider as Method Overloading)
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

// Example 2 Order of Parameter is Changed(Will be Consider as Method Overloading)
class Example2
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int b, int a)
    {
        return a + b;
    }
};

// Example 3 Type of Parameter is Changed(Will be Consider as Method Overloading)
class Example3
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(double a, double b)
    {
        return a + b;
    }
};

// Example 4 (Not a Method Overloading as only return type is Different)
class Example4
{
public:
    int sum(int a, int b)
    {
        return a * b;
    }
    /*double sum(int a, int b) // You can See error here
    {
        return a * b;
    }*/
};
int main()
{
    Math obj;
    cout << obj.add(3, 4);
    cout << endl;
    cout << obj.add(2, 5, 6);
}
