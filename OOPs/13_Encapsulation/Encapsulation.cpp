/*

Encapsulation is the Wrapping up of data and Methods in a Single Unit, while controlling access to them
Data Hiding/ Information Hiding

!Fully Encapsulated : All Data and Member Private

!Real life Example
In a bank, encapsulation can be seen with an ATM machine:

Public Interface: The ATM screen and buttons (for withdrawing money, checking balance, etc.).
Hidden Implementation: The internal processes (like verifying your account, checking your balance, updating the database) are hidden from you.
You interact with the ATM through the public interface, while the complex operations are kept private and secure.

!Advantage
:- Data Hiding -> Security
:- Code Reusability

*/

#include <iostream>
using namespace std;

class Encapsulation
{
    int BankAccount;
    string HolderName;
    int Balance;

public:
    void set(int BankAccount, string HolderName, int Balance)
    {
        this->BankAccount = BankAccount;
        this->HolderName = HolderName;
        this->Balance = Balance;
    }

    void get()
    {
        cout << "The Bank Account Number is " << BankAccount << endl;
        cout << "The Holder Name is " << HolderName << endl;

        if (Balance > 0)
            cout << "The Balance is " << Balance << endl;
        else
        {
            cout << "Invalid Balance";
        }
    }
};

int main()
{
    Encapsulation obj;
    obj.set(123, "Rahi Agarwal", 10000);
    obj.get();

    return 0;
}