/*

The capability of class (Derieved Class) to derive property & characterstic from another class (Base Class).

Five Types of Inheritance

i)     Single Inheritance : child class derieved directly from the base class
ii)    MultiLevel Inheritance : child class derieved from multiple base class
iii)   Multiple Inheritance : child class derieved from the calss which is also derieved from another base class
iv)    Hierarchical Inheritance : Multiple classes derived from a single base class
v)     Hybrid Inheritance : Inheritance consisting of multiple inheritance types of the above speciied

Java Does not support Multiple Inheritance
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
// Protected inheritance makes all public members of Human protected in Student
class Student : protected Human // If we make it protected then also it will be not accessile outside the class
{
    int roll_number;

public:
    int fees;
    Student(int roll_number, int weight,int fees)   // it is always better to make a constructor rather than a function
    {
        this->roll_number = roll_number;
        this->weight = weight;
        this->fees=fees;
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
    Student A(3145,60,100);
    //  A.name = "Rahi"; // Can't be access outside the class it is private
    //  A.age = 20;      // Can't be accessed outside the class as it is protected
    A.fees = 2000; // it can be accessed
    A.display();
}