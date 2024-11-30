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

class stack
{
public:
    int size;
    int top;
    int *arr;
};

int isEmpty(stack *ptr)
{ // Function to check if stack is Empty
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(stack *ptr)
{ // Function to check if stack is Full
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{ // Function to Push or Insert the Element
    if (isFull(ptr))
    {
        cout<<"Stack Overflow! Cannot push %d to the stack\n"<<val<<endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{ // Function to Pop or Remove the Element
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(stack *sp, int i)
{ // Function to check the Index of an Element
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0)
    {
        cout << "Not a valid position for the stack\n" << endl;
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}

int stackTop(struct stack *sp)
{ // Function to Find the TopMost Value in stack
    return sp->arr[sp->top];
}

int stackBottom(struct stack *sp)
{ // Function to Find the BottomMost Value in stack
    return sp->arr[0];
}

int main()
{
    // stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=new stack;
    stack *s;
    s->size = 10;
    s->top = -1; // when there is no element present in the stack
    s->arr = new int;
    cout << "Stack has been created successfully\n";

    // Pushing an element manually and then checking if the stack is empty or not
    s->arr[0] = 7;
    s->top++;

    // Check if stack is empty
    if (isEmpty(s))
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }

    push(s, 1); // Push Function Used
    push(s, 23);
    push(s, 99);
    push(s, 75);
    push(s, 3);
    push(s, 64);
    push(s, 57);
    push(s, 46);
    push(s, 89);
    push(s, 6); // ---> Pushed 10 values
    // push(sp, 46); // Stack Overflow since the size of the stack is 10
    cout << "After pushing, Full: %d\n" << isFull(s) << endl; // if the it will show 1 else 0
    cout << "After pushing, Empty: %d\n" << isEmpty(s) << endl; // if empty then it will show 1 else 0

    cout << "Popped %d from the stack\n" << pop(s) << endl; // --> Last in first out!                 // Pop Function Used
    cout << "Popped %d from the stack\n" << pop(s) << endl; // --> Last in first out!
    cout << "Popped %d from the stack\n" << pop(s) << endl; // --> Last in first out!

    // Printing values from the stack
    for (int j = 1; j <= s->top + 1; j++)
    {
        cout << "The value at position %d is %d\n" << j << peek(s, j) << endl;
    }

    cout<<"The top most value of this stack is %d\n"<< stackTop(s)<<endl;
    cout<<"The bottom most value of this stack is %d\n"<< stackBottom(s)<<endl;

    return 0;
}