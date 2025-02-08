#include <bits/stdc++.h>
using namespace std;

/*
A constructor is a special member function of a class that is automatically invoked when an object is created. It is used to initialize the object’s attributes and ensure the object is in a valid state.

🔹 Constructors are used to initialize objects automatically when they are created.
🔹 Without explicit initialization, objects may contain random values.

❓ Why not use a simple function for initialization?
✅ Cleaner Code: Removes the need for separate function calls.
✅ Automatic Setup: Ensures the object is always in a valid state.
✅ Overloading: Allows multiple ways to initialize an object.

📌 Constructor Rules:
✔ Must be in the public section.
✔ Automatically invoked when an object is created.
✔ Cannot return values and have no return type.
✔ Can have default arguments.
✔ Cannot be referenced by address.
✔ If you define a constructor (default or parameterized), the compiler won't generate any others.
*/

class Bank
{
public:
    string name;
    int account_number;
    double balance;

    // Default Constructor (Called when no arguments are passed)
    Bank()
    {
        name = "Unknown";
        account_number = 0;
        balance = 0.0;
        cout << "Bank is Closed!" << endl;
    }

    // Parameterized Constructor (Called when arguments are provided)
    Bank(string n, int a, double b)
    {
        name = n;
        account_number = a;
        balance = b;
    }

    // Function to display account details
    void show()
    {
        cout << "------------------------" << endl;
        cout << "Name         : " << name << endl;
        cout << "Account No.  : " << account_number << endl;
        cout << "Balance      : " << balance << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    Bank obj("Rahi", 45, 10000); // Calls parameterized constructor
    Bank obj2;                   // Calls default constructor

    cout << "\nAccount Details:\n";
    obj.show();  // Displays details of obj
    obj2.show(); // Displays details of obj2 (default values)

    return 0;
}
