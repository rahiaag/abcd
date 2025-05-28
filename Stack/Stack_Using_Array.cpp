// stack is the collection of elements following LIFO. items can be inserted or removed only from one end

// If top value is -1 then it means that there is no element present in the stack

// Implementing stack using array
/*
->Fixed size array creation
-> Top Element


Constant time mein insertion O(1)
*/
#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int capacity;
    int *arr;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return;
        }
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    s.display();

    cout << "Popped: " << s.pop() << endl;
    s.display();

    return 0;
}
