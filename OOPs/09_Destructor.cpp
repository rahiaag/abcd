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
