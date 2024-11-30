#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

// Case 1 : Inserting the first element in the linked list
node *insertAtStart(node *head, int data)
{
    node *ptr;
    ptr = new node;
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// Case 2 : inserting the element at a position linked list
node *insertAtPosition(node *head, int pos, int data)
{
    node *ptr;
    ptr = new node;
    node *p = head;
    int i = 0;
    while (i != pos - 1)                  //if pos is 2 then we have to move to till position 1 that why pos-1
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
    while (p->next != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
               // if we return the p then it will give us the ptr value means end value and its previous one because of while loop
               // if we return ptr then it will give only the node ptr means single value
    return head;
}

void display(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

// Case 4 : Inserting the element after a given node
node *insertAfterNode(node *prevNode,node *head,int data)
{
node *ptr=new node;
ptr->data=data;

ptr->next=prevNode->next;

prevNode->next=ptr;
return head;
}


int main()
{
    node *head; // address are stored in pointer
    // Allocate memory for nodes in the linked list in heap
    head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 12;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 67;
    third->next = NULL;

    cout<<"Linked List before Insertion"<<endl;
    display(head);

    //head=insertAtStart(head,23);

    // head=insertAtPosition(head,2,345);

   // head = insertAtEnd(head, 345);

   head=insertAfterNode(second,head,2323);

   cout<<"Linked List after Insertion"<<endl;
   display(head);

    return 0;
}
/*
insertion ke notes kaise banane hai 
sabke function likega + time complexity +harry ke notes dekhne umse diagram bhi hai to vo bhi karega */