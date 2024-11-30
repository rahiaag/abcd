#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

// Case 1 : Inserting the first element in the circular linked list
node *insertAtStart(node *head, int data)
{
    node *ptr;
    ptr = new node;
    ptr->data = data;
    node *p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return ptr;
}

// Case 2 : inserting the element at a position circular linked list
node *insertAtPosition(node *head, int pos, int data)
{
    node *ptr;
    ptr = new node;
    node *p = head;
    int i = 0;
    while (i != pos - 1) // if pos is 2 then we have to move to till position 1 that why pos-1
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// Case 3 : Inserting at the End
node *insertAtEnd(node *head, int data)
{
    node *ptr; // ptr is only the node
    ptr = new node;
    node *p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = head;
    p->next = ptr;
    ptr->next = head;
    return head;
}

// Case 4 : Inserting the element after a given node
node *insertAfterNode(node *prevNode, node *head, int data)
{
    node *ptr = new node;
    ptr->data = data;

    ptr->next = prevNode->next;

    prevNode->next = ptr;
    return head;
}

void display(node *head)
{
    node *ptr = head;
    while (ptr->next != head) // it will not print the last element
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data; // so we will print it here
}

int main()
{
    node *head;
    head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 12;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 67;
    third->next = head;

    cout << "Linked List before Insertion" << endl;
    display(head);
    cout << endl;

    head = insertAtStart(head, 23);

    // head=insertAtPosition(head,2,345);

    // head = insertAtEnd(head, 3453);

    // head=insertAfterNode(second,head,2323);

    cout << "Linked List after Insertion" << endl;
    display(head);

    return 0;
}
