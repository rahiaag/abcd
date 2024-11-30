/*

The capability of class (Derieved Class) to derive property & characterstic from another class (Base Class).

Five Types of Inheritance

i)     Single Inheritance
ii)    MultiLevel Inheritance
iii)   Multiple Inheritance
iv)    Hierarchical Inheritance
v)     Hybrid Inheritance


*/

#include <iostream>
using namespace std;

class Human
{
    string name;

protected:
    int age;
    int weight;
};

class Student : protected Human // If we make it protected then also it will be not accessile outside the class
{
    int roll_number;

public:
    int fees;
    void fun(int roll_number, int weight)
    {
        this->roll_number = roll_number;
        this->weight = weight;
    }
    void display()
    {
        cout << "Fees is " << fees << " " << endl;
        cout << "weight is " << weight << " " << endl;
        cout << "Roll Number is " << roll_number << " " << endl;
    }
};

int main()
{
    Student A;
    //  A.name = "Rahi"; // Can't be access outside the class it is private
    //  A.age = 20;      // Can't be accessed outside the class as it is protected
    A.fees = 2000; // it can be accessed

    A.fun(3145, 60);

    A.display();
}