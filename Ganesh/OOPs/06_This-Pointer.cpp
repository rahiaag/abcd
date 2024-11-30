/*
............ Use of This Pointer ............

If a method has parameters with the same names as the class's attributes, this is used to differentiate between them.
*/

#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
    string name;
    int account_number;
    double balance;

    Bank(string name, int account_number, double balance) // Parametrized Constructor
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
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

    obj.show();

    return 0;
}