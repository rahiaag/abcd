// Constructor Overloading is when a Class have Mulitple Constructor with different Parameters

#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
    string name;
    int account_number;
    double balance;

    Bank() // Default Constructor
    {
        cout << "Bank is Closed " << endl
             << endl;
    }

    Bank(string n, int a) // Parametrized Constructor
    {
        name = n;
        account_number = a;
    }

    Bank(string n, int a, double b) // Parametrized Constructor
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
        cout<<endl;
    }
};

int main()
{
    Bank obj;
    Bank obj1("Nitin", 23);
    Bank obj2("Rahi", 45, 10000);

    obj.show();   // Will Print Garbage Value
    obj1.show();  // Will Print Garbage value for Balance
    obj2.show();

    return 0;
}