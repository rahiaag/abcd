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
    Node *p = new Node;
    p->data = data;
    p->next = NULL;
    return p;
}

void traversal(Node *head)
{
    Node *p = head;
    while (p->next != head)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data;
}

// INSERTION

// Case 1: Insert at the start

Node *InsertatStart(Node *head, int data)
{
    Node *q = new Node;
    q->data = data;

    Node *p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    q->next = head;
    p->next = q;
    head = q;

    return q;
}

// Case 2: Insert in Middle

Node *InsertinMiddle(Node *head, int data)
{
    Node *p = new Node();
    p->data = data;
    Node *q = head;

    int length = 1;

    while (q->next != head)
    {
        q = q->next;
        length++;
    }
    q = head;

    for (int i = 0; i < (length / 2) - 1; i++)
    {
        q = q->next;
    }
    p->next = q->next;
    q->next = p;

    return head;
}

// Case 3: Insert at End

Node *InsertatEnd(Node *head, int data)
{
    Node *p = new Node();
    p->data = data;

    Node *q = head;

    while (q->next != head)
    {
        q = q->next;
    }
    p->next = head;
    q->next = p;

    return head;
}

// Case 4: Insert at ANY Position

Node *InsertatPosition(Node *head, int data, int position)
{
    Node *p = new Node();
    p->data = data;
    int length = 1;

    Node *q = head;

    while (q->next != head)
    {
        q = q->next;
        length++;
    }
    q = head;
    for (int i = 0; i < position; i++)
    {
        q = q->next;
    }
    p->next = q->next;
    q->next = p;

    return head;
}
int main()
{
    Node *p0 = create(10);
    Node *p1 = create(20);
    Node *p2 = create(30);
    Node *p3 = create(40);

    p0->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = p0;

    cout << "Traversal Before Insertion :";
    traversal(p0);

    cout << endl;
    cout << endl;

    // p0 = InsertatStart(p0, 50);
    // ṇp0 = InsertinMiddle(p0, 50);
    // p0 = InsertatEnd(p0, 50);
    p0 = InsertatPosition(p0, 50, 2);
    cout << "Traversal After Insertion :";

    traversal(p0);

    return 0;
}