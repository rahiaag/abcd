// O(1) solution

/* 
There is a singly-linked list head and we want to delete a  node in it.
You are given the node to be deleted node. You will not be given access to the first node of head.
All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.
*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *create(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void traversal(Node *head)
{
    Node *p = head;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// The Approach will be we will create temp node which is next node of given node then we will copy the data of next node and put it equal to the current node and point the next of
// current node to temp->next


void deleteNode(Node *node)
{

    Node *temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
}

int main()
{
    Node *p = create(1);
    Node *p1 = create(2);
    Node *p2 = create(3);
    Node *p3 = create(4);
    Node *p4 = create(5);
    Node *p5 = create(6);

    p->next=p1;
    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=p5;
    p5->next=NULL;

    cout<<" Before Traversal :"<<endl;
    traversal(p);
    cout<<endl;

    Node *temp;
    

    cout<<"Enter the Node You want to delete :";
    cin>>temp->data;
    
    deleteNode(temp);
     cout<<" After Deleting  :"<<temp<<endl;
    
}


Node *del4eteNode (Node *node)
{
    Node *temp=node->next;
    node->data=temp->data;
    node->next=temp->next;
}
return node
