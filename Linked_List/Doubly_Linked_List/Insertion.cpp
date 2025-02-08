#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prevNode;
};

int display(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int displayFromLast(node *prevNode)
{

    node *p = prevNode;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->prevNode;
    }
}

// Case 1: Inserting at the Start
node *insertAtStart(node *head, int data)
{
    node *ptr = new node;
    ptr->data = data;
    head->prevNode = ptr;
    ptr->next = head;
    ptr->prevNode = NULL;
    head = ptr;

    return ptr;
}


// Case 2 : inserting the element at a position linked list
node *insertAtPosition(node *head, int pos, int data)
{
    node *ptr;
    ptr = new node;
    node *p = head;
    int i = 0;
    while (i != pos - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    ptr->prevNode = p;
    node *q = ptr->next;
    q->prevNode = ptr;

    return head;
}

// Case 3 : Inserting at the End
node *insertAtEnd(node *head, int data)
{
    node *ptr = new node;
    node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->prevNode = p; // case 3 mein problem aa rahy hai dispaly from back

    p->next = ptr;
    ptr->next = NULL;

    return head;
}

// Case 4 : Inserting the element after a given node
node *insertAfterNode(node *prev, node *head, int data)
{
    node *ptr = new node;
    ptr->data = data;

    ptr->next = prev->next;
    node *q = prev->next;
    ptr->prevNode = prev;
    q->prevNode = ptr;

    prev->next = ptr;
    return head;
}

int main()
{
        node *head = new node;
        node *second = new node;
        node *third = new node;
        node *fourth = new node;

        head->data = 8;
        second->data = 16;
        third->data = 24;
        fourth->data = 32;

        head->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = NULL;

        head->prevNode = NULL;
        second->prevNode = head;
        third->prevNode = second;
        fourth->prevNode = third;

        cout << "Linked List before Insertion" << endl;
        // display(head);
        displayFromLast(fourth);

        // head=insertAtStart(head,0);

        // head=insertAtPosition(head,2,345);

        head = insertAtEnd(head, 345);

        // head=insertAfterNode(second,head,2323);
        cout << endl;

        cout << "Linked List after Insertion" << endl;
        // display(head);
        displayFromLast(fourth);

    return 0;
}
