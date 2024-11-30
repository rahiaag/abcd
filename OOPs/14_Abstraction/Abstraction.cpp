/*

-Displaying only essential information and hiding the implementation Detail from the user ie (Hiding Implementation Detail)

* Abstraction can be implemented using
- Classes
- Access Specifier

!Real life Example
* When you send an Email to someone, you just click send and you get the success message.what happend when you click send, 
  how data is transmitted over the network to the recipient is hidden from you( because it is irrelevant to you)

!Advantage

* Only you can make changes to your data, and no one else can.
* It makes application secure

*/

#include <iostream>
using namespace std;

class Account
{
private:
    int Balance;

public:
    Account(int Balance)
    {
        this->Balance = Balance;
    }

    void deposit(int amount)
    {
        Balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= Balance)
        {
            Balance -= amount;
        }
    }

    double getBalance()
    {
        return Balance;
    }
};

int main()
{
    Account obj(1000.0);
    obj.deposit(500.0);
    obj.withdraw(200.0);

    cout << "Balance: " << obj.getBalance() << endl;

    return 0;
}
