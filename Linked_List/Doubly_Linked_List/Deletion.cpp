#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prevNode;
};

// Case 1 : Deleting the first element from the linked list
node *DeletetAtFirst(node *head)
{
    node *ptr = head;
    head = head->next;
    head->prevNode = NULL;

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
    node *r=q->next;
    p->next = q->next;
    r->prevNode=p;

    free(q);
    return head;
}

// Case 3 : Deleting the End element

node *DeleteAtEnd(node *head)
{
    node *p = head;
    node *q = head->next;                            // iss wale mein display from last se problem aa rahy hai
 
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

// Case 4 : Deleting the element By given Value

node *DeleteByValue(node *head, int value)   //This Function Will Not Delete the Last Value
{
    node *p = head;
    node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        node *ptr=q->next;
        ptr->prevNode=p;
        free(q);
    }
    return head;
}

int display(node *head)
{
    node *p = head;
    while (p!= NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
/*
int displayFromLast(node *head)
{
    node *p=head;
    while(p!=NULL)
    {
        p=p->next;
    }
    node *q=p;

    while(q->prevNode!=NULL)
    {
        cout<<q->data<<" ";
        q=q->prevNode;
    }
}
*/

int displayFromLast(node *prevNode)
{
    node *p=prevNode;
    
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->prevNode;
    }
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

    cout << "The Linked list is :" << endl;
   // display(head);
    displayFromLast(fourth);

    // head = DeletetAtFirst(head);
    // head=DeleteInBetween(head, 1);
    //head=DeleteAtEnd(head);
    head=DeleteByValue(head,24);
    cout << endl;
    cout << "The Linked list is after Deletion is " << endl;
    display(head);
    //displayFromLast(fourth);

    return 0;
}


