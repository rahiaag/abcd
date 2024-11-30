#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *create(int data)
{
    Node *root = new Node;
    root->data = data;
    root->left = NULL;
    root->right = NULL;

    return root;
}

void PreOrder(Node *root)
{
    Node *p = root;
    if (p != NULL)
    {
        PreOrder(p->left);
        cout << p->data << " ";
        PreOrder(p->right);
    }
}

void InOrder(Node *root)
{
    Node *p = root;
    if (p != NULL)
    {
        cout << p->data << " ";
        InOrder(p->left);
        InOrder(p->right);
    }
}

void PostOrder(Node *root)
{
    Node *p = root;
    if (p != NULL)
    {
        cout << p->data << " ";
        PostOrder(p->left);
        PostOrder(p->right);
    }
}

int main()
{
    /*
           10
           /   \
         8      2
       /  \    /
     3     5  2
 */
    Node *p = create(10);
    Node *p1 = create(8);
    Node *p2 = create(2);
    Node *p3 = create(3);
    Node *p4 = create(5);
    Node *p5 = create(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;

    PostOrder(p);
    return 0;
}
