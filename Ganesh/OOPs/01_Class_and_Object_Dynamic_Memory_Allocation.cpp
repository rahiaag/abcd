/*

- A class itself does not have a size, but an object of a class does.
- The size of an empty class object is 1 byte.
- `int *p = new int;` allocates memory dynamically on the heap for an integer pointer `p`.
- The stack size is small, but the heap size is large.
- A compile-time error occurs when there is a syntax error, such as a missing comma or semicolon.
- A runtime error occurs when there is an issue like accessing an out-of-bounds array or dividing by zero (e.g., `x / 0`).

- A compiler converts the source code into machine code and form a other file
- When source code is compiled into machine language, the resulting file is typically formed with the .exe (executable) 
  extension in Windows operating systems.

- An interpreter translates and executes the source code directly, line by line, without producing a separate machine code file (Generally Slow).


- we need to manually delete the object using delete obj. the memory allocated with new is not automatically released when the object goes out of scope.

- The memory of statically is automatically managed
*/

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person *person1 = new Person;
    (*person1).name = "Rahi";   // Same as person1->name
    (*person1).age = 23;

    person1->displayInfo();

    return 0;
}
