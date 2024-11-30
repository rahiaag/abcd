#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

Node *create(int data){
    Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void traversal(Node *head)
{
    Node *p=head;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

/*-----------------------------------------------------

1st Method counting the Nodes and then return the middle Node 
Time Complexity :  O(n) + O(n/2)
Space Complecity : O(1)

-------------------------------------------------------*/

Node *middle (Node *head){   
    Node *p=head;            
    int i=0;

    while (p->next!=NULL)
    {
        p=p->next;
        i++;
    }
    p=head;

    for (int j=0;j<i/2;j++)
    {
        p=p->next;
    }

    return p;

}

/*-----------------------------------------------------

2nd Method Using Slow and Fast Pointer
Time Complexity :  O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

Node *Middle(Node *head)    
{                        
    Node *slow=head;
    Node *fast=head;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
    Node *p=create(1);
    Node *p1=create(2);
    Node *p2=create(3);
    Node *p3=create(4);
    Node *p4=create(5);

    p->next=p1;
    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=NULL;

    //traversal(p);

    Node *temp=middle(p);
    cout<<temp->data;
    
    return 0;
}