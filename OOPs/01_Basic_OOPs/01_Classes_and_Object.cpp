/*
🟢 Object-Oriented Programming (OOPs)

OOPs is a way of programming where users organize code into objects rather than functions.  
Each object contains its own data and functions that operate on that data, making software development more manageable and reusable.

🔹 Advantages of OOPs:
   ✅ Modularity: Code is organized into objects, making it easier to manage and modify.
   ✅ Reusability: Classes can be reused across different programs, saving development time.
   ✅ Scalability: Easier to add new features without changing existing code.
   ✅ Maintainability: Encapsulation and modularity make code maintenance simpler.
   ✅ Flexibility: Polymorphism allows for dynamic and flexible code.

🔸 Disadvantages of OOPs:
   ❌ Complexity: OOPs can be more complex to design compared to procedural programming.
   ❌ Overhead: OOPs may introduce performance overhead due to features like inheritance.
   ❌ Additional Code: More code is required to define classes and objects.
   ❌ Not Ideal for Small Programs: OOPs may be overkill for short programs.

----------------------------------------------------

🛠️ OOPs - Classes and Objects

📌 C++ was initially called "C with Classes" by Bjarne Stroustrup.

📌 Classes are an extension of structures in C.  
   - Limitations of structures:
     🔹 Members were public by default.
     🔹 No methods (functions inside structures).

📌 Classes:
   - Add methods and properties.
   - Allow members to be private or public.

📌 Class:
   - A class is a fundamental building block of Object-Oriented Programming.
   - It is a user-defined data type containing data members and member functions.
   - It acts as a blueprint or template for objects that share common properties and methods.

📌 Object:
   - An object is an instance of a class.
   - Data members and methods of a class cannot be used directly; we need to create an object (or instance) of the class to use them.
   - In simple terms, objects represent real-world entities.

   🏗️ Class is Logical | 🎭 Object is Physical

----------------------------------------------------

📌 Important Concepts in OOPs:

🧮 Memory Management:
   - A class itself does not have a size, but an object of a class does.
   - The size of an empty class object is 1 byte.
   (It is because C++ standard requires that every distinct object must have a unique address to distinguise different object of class)
   - `int *p = new int;` dynamically allocates memory on the heap for an integer, and `p` is a pointer to that memory.
   - Stack size is small (used for function calls and local variables), while heap size is large.

🛑 Errors in Programming:
   - Compile-time error: Syntax issues like missing semicolons or incorrect syntax.
   - Runtime error: Errors occurring while the program is running, e.g., accessing an out-of-bounds array or dividing by zero (`x / 0`).

⚙️ Compilation Process:
   - A compiler converts source code into assembly language specific to the target machine.
   - An assembler converts assembly code into machine code (binary instructions).
   - The machine code produces an intermediate or executable file (e.g., `.exe` in Windows).
   - An interpreter translates and executes source code directly, line by line, without producing a separate machine code file (generally slower).

🗑️ Memory Management in OOPs:
   - Objects created using `new` must be manually deleted using `delete obj;`.  
     ❗ Failure to do so causes memory leaks.
   - Statically allocated memory is automatically managed by the system and released when it goes out of scope.
     ✅ Memory for local variables is allocated on the stack when a function is called and deallocated when it exits.

----------------------------------------------------
*/
#include <iostream>
using namespace std;

// Class definition
class Person
{
public:
    // Data members
    string name;
    int age;

    // Member function to display information
    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Member function to add two integers
    int data(int a, int b);
};

// Definition of the data function outside the class
int Person::data(int a, int b)
{
    return a + b;
}

int main()
{
    // 1. Static Object Allocation
    cout << "Static Object Allocation" << endl;
    Person person1;
    person1.name = "John Doe";
    person1.age = 30;
    person1.displayInfo();

    int result = person1.data(10, 20);
    cout << "Result of data function: " << result << endl;
    cout << "---------------------------" << endl;

    // 2. Dynamic Object Allocation
    cout << "Dynamic Object Allocation" << endl;
    Person *person2 = new Person;
    person2->name = "Rahi";
    person2->age = 23;
    person2->displayInfo();

    // Release dynamically allocated memory
    delete person2;

    return 0;
}
