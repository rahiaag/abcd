#include <iostream>
using namespace std;

class Shallow {
public:
    int* data;
    
    Shallow(int val) {
        data = new int(val);  // Dynamically allocated memory
    }

    void display() {
        cout << "Value: " << *data << endl;
    }
};

int main() {
    Shallow obj1(10);
    Shallow obj2 = obj1;  // Shallow copy (default behavior)

    *obj2.data = 20;  // Modifies shared memory

    obj1.display();  // Output: Value: 20 (unexpected change!)
    obj2.display();  // Output: Value: 20

    delete obj1.data;  // Deletes the memory, obj2 now has a dangling pointer!

    return 0;
}
