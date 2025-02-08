/*
Private Members in C++

Definition:
    - Private members are accessible only within the class in which they are declared.

Purpose:
    - They protect data by restricting direct access and ensuring controlled modifications via member functions.

How to Access Private Members?

1. Using Member Functions:
    - Member functions (e.g., getters and setters) provide controlled access to private members.

    Example:
    class Example {
    private:
        int data;
    public:
        void setData(int d) { data = d; }
        int getData() { return data; }
    };

2. Using Constructors:
    - Constructors initialize private members when an object is created.

    Example:
    class Example {
    private:
        int data;
    public:
        Example(int d) : data(d) {} // Constructor
    };

3. Using Friend Functions or Classes:
    - Friend functions or classes bypass the private access control to provide direct access to private members.

    Example:
    class Example {
    private:
        int data;
        friend void accessData(Example obj); // Friend function declaration
    };

    void accessData(Example obj) {
        cout << "Private data: " << obj.data << endl;
    };

Why Are Private Members Useful If They Can Be Accessed?

1. Controlled Access:
    - Member functions allow validation before modifying data, ensuring that the object maintains valid states.
    Example: Ensuring an age cannot be negative in a setter function.

2. Encapsulation:
    - By hiding data and implementation details, private members enable modular design.
    - Internal logic can change without affecting the rest of the program as long as the public interface remains the same.

3. Security:
    - Prevents unintended or unauthorized changes to an object's data.
    - Direct access to private members is not possible from outside the class, reducing the risk of accidental data corruption.

4. Clarity:
    - By separating the internal workings of a class from its interface, private members enhance readability and maintainability.

Misconception: "We Are Accessing Private Members Directly"
    - When private members are accessed via member functions, it is not direct access.
    - The control remains within the class, as member functions define how private members can be accessed or modified.

Difference Between Abstraction and Encapsulation:

Encapsulation:
    - Focuses on bundling data and methods into a single unit (class).
    - Restricts access to certain components by using access specifiers (public, private, protected).

Abstraction:
    - Focuses on hiding the complexity and exposing only the essential details to the user.
    - Example: A car exposes methods like `drive()` but hides the internal workings of the engine.

Encapsulation Is About Design, Not Absolute Security:
    - Private members are not a security feature meant to prevent hacking but rather a way to organize and manage code.
    - They separate the internal implementation of a class from how it's used externally.
    - This prevents accidental misuse or modification of critical variables.
*/

#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
    int AccountNo;
    string HolderName;

    void setId(int No)
    {
        // Controlled Access (See above)
        if (No<0 ){
            cout<<"No is Invalid"<<endl;
        }
        else{
        AccountNo = No;
        }
    }

    int getId()
    {
        return AccountNo;
    }

    void setName(string Name)
    {

        HolderName = Name;
    }

    string getName()
    {
        return HolderName;
    }
};

int main()
{
    Bank detail;
    detail.setName("Rahi");
    detail.setId(2001);
    cout << detail.getId() << endl;
    cout << detail.getName();

    return 0;
}