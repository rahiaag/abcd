#include <bits/stdc++.h>
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
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

/*-----------------------------------------------------
1st Approach Counting the Node and then Delete the Nth Node

Time Complexity : O(n+k)
Space Complecity : O(1)

-------------------------------------------------------*/
Node *deleteLast(Node *head, int n)
{

    Node *p = head;
    int k = 0;

    while (p != NULL)
    {
        k++;
        p = p->next;
    }
    int pos = k - n;
    p = head;

    if (pos <= 0)
    {
        return head->next;
    }

    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    Node *temp = p->next;
    p->next = temp->next;

    return head;
}

/*-----------------------------------------------------
2nd Approach Using Two Pointer

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/
Node *DeleteLast(Node *head, int k)
{
    Node *fast = head, *slow = head;

    for (int i = 0; i < k; i++)
        fast = fast->next;

    if (fast == NULL)
        return head->next;

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return head;
}

int main()
{
    Node *p = create(1);
    Node *p1 = create(2);
    Node *p2 = create(3);
    Node *p3 = create(4);
    Node *p4 = create(5);

    p->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = NULL;

    traversal(p);
    cout << endl;

    Node *temp = DeleteLast(p, 2);
    traversal(temp);

    return 0;
}