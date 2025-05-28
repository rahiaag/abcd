#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack
{
private:
    Node *top; // Pointer to the top element

public:
    Stack()
    {
        top = NULL;
    }
    ~Stack()
    {
        while (top)
        {
            pop(); // free memory
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = top;
        top = temp; // Updating the top Pointer
    }

    int pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow";
            return -1;
        }
        int item = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return item;
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "No item" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty()
    {
        return (top == NULL);
    }

    void display()
    {
        if (top == NULL)
        {
            cout << "No Element" << endl;
            return;
        }

        else
        {
            Node *temp = top;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    s.display();

    cout << "Popped: " << s.pop() << endl;
    s.display();

    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}