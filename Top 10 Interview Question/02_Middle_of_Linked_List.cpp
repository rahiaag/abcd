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

/*-----------------------------------------------------

1st Approach Counting the Element

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

int MiddleList(Node *head)
{
    int count = 0;
    Node *p = head;

    while (p != NULL)
    {
        p = p->next;
        count++;
    }
    p = head;

    for (int i = 0; i < count / 2; i++)
    {
        p = p->next;
    }
    return p->data;
}
/*-----------------------------------------------------

2nd Approach Using the slow and fast Pointer

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

int MiddleElement(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    // fast != NULL checks if we reached the end of the list.
    // fast->next != NULL ensures there are at least two more nodes left so the fast pointer can jump two steps.

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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

    cout << "Middel Element is :" << MiddleElement(p);

    return 0;
}