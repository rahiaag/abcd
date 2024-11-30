#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
/*
void display(node *head)
{
    node*p=head;
    while (p->next!= head)               // We don't write while(p!=head) as we initialize *p with head
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout<<p->data;
}
*/
/* 2nd Method to Display*/

void display(node *head)
{
    node *p = head; 
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

int main()
{
    node *head; // address are stored in pointer
    // Allocate memory for nodes in the linked list in heap
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
    third->next = head;

    display(head);

    return 0;
}