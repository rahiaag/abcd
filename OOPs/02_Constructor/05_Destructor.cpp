/*
A destructor is a method that is automatically called when the object is made of scope or destroyed 
In C++, the destructor name is also the same as the class name but with the (~) tilde symbol as the prefix

in python the destructor is named _del_

in jave, the garbage collector automatically deletes the useless objects,so there is no concpet of destructor in jave
we could have used finalize () method but is also deprecated since java9

Destrcutor is also created automatically

*/


#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
    string name;
    int account_number;
    double balance;

    Bank()
    {
        cout << "Bank is Closed " << endl
             << endl;
    }

    ~Bank()
    {
        cout << "I am Destructor " << endl;
    }

    void show()
    {
        cout << "Name is : " << name << endl;
        cout << "Account Number is : " << account_number << endl;
        cout << "Balance is : " << balance << endl;
        cout << endl;
    }
};

int main()
{
    Bank obj;
    obj.show();

    return 0;
}
