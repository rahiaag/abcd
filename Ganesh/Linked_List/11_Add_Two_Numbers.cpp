/*

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

*/

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

Using Two Pointers
Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

Node *AddTwoNumber(Node *l1, Node *l2)
{
    Node *l3=new Node;
    Node*temp=l3;
    int carry=0;

    while (l1 && l2){
        int value=l1->data+l2->data+carry;
        l3->next=create(value%10);
        carry=value/10;
        l3=l3->next;
        l2=l2->next;
        l1=l1->next;
    }

    while (l1){
        int value=l1->data+carry;
        l3->next=create(value%10);
        carry=value/10;
        l3=l3->next;
        l1=l1->next;
    }

    while (l2){
        int value=l2->data+carry;
        l3->next=create(value%10);
        carry=value/10;
        l3=l3->next;
        l2=l2->next;
     
    }

    if (carry){                   
 // One Special Case for [9,9,9,9,9,9,9] and [9,9,9,9] in this we will get the carry at the last which we are not returning so this condition will return that carr
        l3->next=create(carry);
    }
    return temp->next;
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

    Node *q = create(1);
    Node *q1 = create(2);
    Node *q2 = create(3);
    Node *q3 = create(4);
    Node *q4 = create(5);

    q->next = q1;
    q1->next = q2;
    q2->next = q3;
    q3->next = q4;
    q4->next = NULL;

    Node *res = AddTwoNumber(p, q);

    traversal(res);

    return 0;
}
