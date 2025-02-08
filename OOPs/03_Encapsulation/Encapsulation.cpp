/*
- Encapsulation is the wrapping up of data and methods in a single unit (class) while controlling access using access specifiers.
- Supports Data Hiding by restricting direct access to sensitive data.

! Fully Encapsulated Meaning:
* A class is fully encapsulated when all its data members are private and can be accessed only through public methods.

* Encapsulation can be implemented using:
  - Classes
  - Access Specifiers (private, protected, public)
  - Getters and Setters (to control data access)

! Real-life Example:
* In a bank system, a 'BankAccount' class encapsulates private attributes like 'AccountNumber', 'AccountHolderName', and 'balance'.
  These details are hidden from direct access and can be modified only through public methods like 'Deposit()', 'Withdraw()', and 'getBalance()'.

! Advantages:
* Data Hiding → Enhances Security
* Code Reusability → Allows controlled access to functionality
* Promotes modularity and flexibility → Makes code easier to maintain

*/

// REVIEW - Use Constructor for Initialization: Adding a constructor simplifies initialization and avoids the need for a separate setter function.


#include <iostream>
using namespace std;

class Encapsulation
{
    int BankAccount;
    string HolderName;
    int Balance;

public:
    // here we can use constructor in place of function so that we do not need to call the funciton every time
    Encapsulation(int BankAccount, string HolderName, int Balance)
    {
        this->BankAccount = BankAccount;
        this->HolderName = HolderName;
        this->Balance = Balance;
    }

    void displayInfo()
    {
        cout << "The Bank Account Number is " << BankAccount << endl;
        cout << "The Holder Name is " << HolderName << endl;

        if (Balance > 0)
            cout << "The Balance is " << Balance << endl;
        else
        {
            cout << "Error : Invalid Balance" << endl;
        }
    }
};

int main()
{
    Encapsulation obj(3145, "Rahi Agarwal", 100000);
    obj.displayInfo();

    return 0;
}