#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void display(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    node *head; // address are stored in pointer
    //Allocate memory for nodes in the linked list in heap
    head = new node;
    node *first = new node;
    node *second = new node;
    node *third = new node;

    head->data = 12;
    head->next = first;
    first->data = 32;
    first->next = second;
    second->data = 8;
    second->next = third;
    third->data = 67;
    third->next = NULL;

    display(head);

    return 0;
}