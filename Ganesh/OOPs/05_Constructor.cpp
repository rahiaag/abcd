/*
Random value are present in the object when we create the object so to initialize the value we use construtor

!Question : But we can use the simple function to initialize the values

:- Cleaner Code: Constructors keep code neat, removing the need for separate initialization calls.
:- Automatic Setup: Constructors automatically run when an object is created, ensuring it's in a valid state.
:- Overloading: You can overload constructors to initialize objects in different ways based on provided arguments.

:- A constructor should be declared in the public section of the class
:- They are automatically invoked whenever the object is created
:- They cannot return values and do not have return types
:- It can have default arguments
:- We cannot refer to their address
:- It is used to initialize the value


!Note: If you create your own constructor (default or parameterized), the compiler won't create any other constructors for you
*/

#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
    string name;
    int account_number;
    double balance;

    Bank()                                  // Default Constructor
    {
        cout << "Bank is Closed " << endl
             << endl;
    }

    Bank(string n, int a, double b)        // Parametrized Constructor
    { 
        name = n;
        account_number = a;
        balance = b;
    }

    void show()
    {
        cout << "Name is : " << name << endl;
        cout << "Account Number is : " << account_number << endl;
        cout << "Balance is : " << balance << endl;
    }
};

int main()
{
    Bank obj("Rahi", 45, 10000);
    Bank obj2;  // If Default constructor removed then it will give error
    obj.show();

    return 0;
}