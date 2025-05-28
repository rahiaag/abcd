#include <iostream>
using namespace std;

class Counter {
private:
    static Counter* instance;
    int count;

    Counter() { count = 0; }  // Private constructor

public:
    static Counter* getInstance() {
        if (instance == nullptr) {
            instance = new Counter();
        }
        return instance;
    }

    void increase() { 
        count++; 
        cout << "Count: " << count << endl; 
    }
};

Counter* Counter::instance = nullptr;  // Initialize instance

int main() {
    Counter* obj1 = Counter::getInstance();
    obj1->increase();  // Count: 1

    Counter* obj2 = Counter::getInstance();
    obj2->increase();  // Count: 2

    return 0;
}
/*
📌 Why is Only One Object Created?
✔ The constructor is private, so we cannot create multiple objects using new Counter().
✔ The static variable (instance) ensures only one object is created.
✔ When calling getInstance(), it checks if an instance already exists:

If nullptr, it creates one.
If already created, it returns the existing instance
*/