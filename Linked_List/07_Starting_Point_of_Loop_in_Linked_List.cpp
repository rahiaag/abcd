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
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

/*-----------------------------------------------------
1st Approach Using Unordered Map

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

Node *meetingPoint(Node *head)
{
    unordered_map<Node *, int> mp;
    Node *temp = head;
    while (temp != NULL)
    {

        if (mp.count(temp) != 0)
        {
            return temp;
        }
        mp[temp] = 1;
        temp = temp->next;
    }
    return NULL;
}

/*-----------------------------------------------------
1st Approach Using of Two Pointer

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

Node *MeetingPoint(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = head;

            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
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
    p5->next = p1;

    Node *temp = meetingPoint(p);
    cout << " Answer " << temp->data << endl;
}
