#include <iostream>
using namespace std;

class Deep {
public:
    int* data;

    Deep(int val) {
        data = new int(val);  // Allocate memory
    }

    // Deep copy constructor
    Deep(const Deep& other) {
        data = new int(*other.data);  // Allocate new memory and copy data
    }

    ~Deep() {
        delete data;  // Prevent memory leak
    }

    void display() {
        cout << "Value: " << *data << endl;
    }
};

int main() {
    Deep obj1(10);
    Deep obj2 = obj1;  // Calls deep copy constructor

    *obj2.data = 20;  // Modifies obj2’s copy

    obj1.display();  // Output: Value: 10 (correct!)
    obj2.display();  // Output: Value: 20

    return 0;
}
