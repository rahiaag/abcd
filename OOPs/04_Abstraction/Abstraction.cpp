/*
- Abstraction means displaying only essential information and hiding internal implementation details from the user 
  (Hiding Implementation Detail).

* Abstraction can be implemented using:
  - Abstract classes
  - Interfaces
  - Function Overriding (Polymorphism)

! Real-life Example:
* When you send an Email, you just click "Send" and get a success message. 
  The complex process of how data is transmitted over the network is hidden from the user.

! Advantages:
* Reduces complexity by exposing only necessary functionality.
* Improves code maintainability.
* Helps in achieving loose coupling between components.
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
