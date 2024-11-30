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
/*-----------------------------------------------------

1st Approach Changing the Links

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

Node *ReverseList(Node *head)
{
    Node *prev = NULL;
    Node *p = head;

    while (p != NULL)
    {
        Node *temp = p->next;
        p->next = prev;
        prev = p; // prev = p; moves prev to the current node to keep track of the reversed part.
        p = temp; // p = temp; advances p to the next node in the original list to continue the loop.
    }
    return prev;
}

/*-----------------------------------------------------

2nd Approach Using Stack

Time Complexity : O(n)
Space Complexity : O(n) as we are using stack for storing elements

-------------------------------------------------------*/

Node *ReverseLinkedList(Node *head)
{
    Node *p = head;
    stack<int> value;
    int count = 0;

    while (p != NULL)
    {
        value.push(p->data);
        p = p->next;
        count++;
    }
    p = head;

    for (int i = 0; i < count; i++)
    {
        p->data = value.top();
        value.pop();
        p = p->next;
    }
    return head;
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

    cout << "Before Traversal" << endl;

    Traversal(p);
    cout << endl;

    Node *result = ReverseList(p);
    cout << "After Traversal" << endl;

    Traversal(result);

    return 0;
}