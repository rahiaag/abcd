#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *CreateNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void Traversal(Node *head)
{
    Node *p = head;

    while (p->next != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << p->data;
}

int main()
{

    Node *p = CreateNode(1);
    Node *p1 = CreateNode(2);
    Node *p2 = CreateNode(3);
    Node *p3 = CreateNode(4);
    Node *p4 = CreateNode(5);

    p->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = NULL;

    Traversal(p);

    return 0;
}