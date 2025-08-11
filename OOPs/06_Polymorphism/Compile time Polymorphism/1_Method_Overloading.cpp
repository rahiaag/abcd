/*
🔹 Polymorphism in OOP  

Polymorphism allows the same function or operator to behave differently based on the context.  
It comes from the Greek words "poly" (many) and "morph" (form), meaning "many forms."

✨ Types of Polymorphism:

1️⃣ Compile-time (Static) Polymorphism:  
   - Compile-time polymorphism refers to the method where function calls are resolved at the time of compilation. 
    The compiler decides which function to execute based on the function signature (number and type of parameters).
    The decision is based on function signatures (name, number of parameters, data types, etc.).

   - It improves performance because there is no overhead of function lookup during runtime.

   - Achieved through Method Overloading and Operator Overloading.  

   ✅ Method Overloading:  
   - Multiple functions in the same class share the same name but differ in:
     - The number of parameters.
     - The types of parameters. 
   - Works within the same class.  
   - Constructor overloading is also allowed.

   ✅ Operator Overloading:  
   - Allows the same operator to perform different operations based on the context.

❌ What is NOT considered Method Overloading?  
   - If two functions have same name and identical parameters (same number, and type) but differ only in return type, it is not method overloading.
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

// Example 2 Order of Parameter is Changed (Valid Overloading if types differ)
class Example2
{
public:
    int add(int a, double b)
    {
        return a + b;
    }
    int add(double b, int a)
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
