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
        cout << p->data;
        p = p->next;
    }
}

/*-----------------------------------------------------

1st Method Using Stack (Brute force Method)
Time Complexity : O(2n)
Space Complecity : O(n)

-------------------------------------------------------*/

Node *ReverseLinked(Node *head)
{
    stack<int> st;

    Node *p = head;

    while (p != NULL)
    {
        st.push(p->data);
        p = p->next;
    }
    p = head;

    while (!st.empty())
    {
        p->data = st.top();
        st.pop();
        p = p->next;
    }
    return head;
}

/*-----------------------------------------------------

2nd Method Using Two Pointers (Optimal Method)
Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

Node *reverseLinked(Node *head)
{
    Node *p = head;
    Node *prev = NULL;

    while (p != NULL)
    {
        Node *temp = p->next;
        p->next = prev;
        prev = p;
        p = temp;
    }
    return prev;
}
int main()
{

    Node *p = create(1);
    Node *p1 = create(2);
    Node *p2 = create(3);
    Node *p3 = create(4);
    Node *p4 = create(5);
    Node *p5 = create(6);

    p->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p5;
    p5->next = NULL;

    cout << " Before Traversal :" << endl;
    traversal(p);
    cout << endl;

    Node *d = ReverseLinked(p);
    cout << " Before Traversal :" << endl;
    traversal(d);
    cout << endl;
}
