#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prevNode;

};

int display(node *head)
{
    node *p=head;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
} 


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
    node *head=new node;
    node *second=new node;
    node *third=new node;
    node *fourth=new node;

    head->data=8;
    second->data=16;
    third->data=24;
    fourth->data=32;

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    head->prevNode=NULL;
    second->prevNode=head;
    third->prevNode=second;
    fourth->prevNode=third;

    display(head);

    displayFromLast(fourth);
     return 0;
}