#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
// Case 1 : Deleting the first element from the linked list
node *DeletetAtFirst(node *head)
{
    node *ptr = head;
    head = head->next;

    free(ptr);
    return head;
}

// Case 2 : Deleting the element in Between the linked list

node *DeleteInBetween(node *head, int index)
{
    node *p = head;
    node *q = head->next;

    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    p->next=q->next;
    
    free(q);
    return head;
}

// Case 3 : Deleting the End element

node *deleteAtEnd(node *head)
{
    node *p=head;
    node *q=head->next;

    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);

    return head;
}

// Case 4 : Deleting the element By given Value

node *deleteByValue(node *head,int value)  //This Function Will Not Delete the Last Value
{
    node *p=head;
    node *q=head->next;

    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    //We know that the loop will stop when conditon fulfilled, now we reached the last element


    if (q->data==value){    //we are checking because we are at last position so if we put any element which is not in linked list so it will delete the last element that's why we are checking for this
    p->next=q->next;
    free (q);
    }
    return head;
}


void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
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
    third->next = NULL;

    cout << "The Linked list is :";
    display(head);
    cout << endl;
    // head=insertAtFirst(head,423);
    //head = DeletetAtFirst(head);
    //head= DeleteInBetween(head, 1);
    //head=deleteAtEnd(head);
    head=deleteByValue(head,32);
    cout << endl;
    cout << "The Linked list is after Deletion is ";
    display(head);

    return 0;
}
