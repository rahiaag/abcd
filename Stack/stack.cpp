#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int size;
    int *arr;

public:
    Stack(int capacity)
    {
        top = -1;
        size = capacity;
        arr = new int[capacity]; // creating a array at runtime
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top] = data;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        else
        {
            return arr[top--];
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "No element present" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " " << endl;
            }
        }
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
