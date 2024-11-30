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

/*-----------------------------------------------------

1st Approach Recursive

Time Complexity : O(n)
Space Complecity : O(h) where h is the height of the tree

-------------------------------------------------------*/

bool isSameTree(Node *p, Node *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL || q == NULL)
    {
        return false;
    }
    return (p->data == q->data && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}

/*-----------------------------------------------------

2nd Approach Checking the InOrder and PostOrder Traversal

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

void inorder(Node *root, vector<int> &result)
{
    if (root != NULL)
    {
        inorder(root->left, result);
        result.push_back(root->data);
        inorder(root->right, result);
    }
    else
    {
        result.push_back(100000); // Mark null nodes
    }
}

void postorder(Node *root, vector<int> &result)
{
    if (root != NULL)
    {
        postorder(root->left, result);
        postorder(root->right, result);
        result.push_back(root->data);
    }
    else
    {
        result.push_back(100000); // Mark null nodes
    }
}

bool isSametree(Node *p, Node *q)
{
    vector<int> inorder_p, inorder_q;
    vector<int> postorder_p, postorder_q;

    inorder(p, inorder_p);
    inorder(q, inorder_q);

    postorder(p, postorder_p);
    postorder(q, postorder_q);

    return (inorder_p == inorder_q) && (postorder_p == postorder_q);
}

int main()
{
    Node *p = create(3);
    Node *p1 = create(4);
    Node *p2 = create(5);
    Node *p3 = create(6);

    p->left = p1;
    p->right = p2;
    p2->right = p3;

    Node *q = create(3);
    Node *q1 = create(4);
    Node *q2 = create(5);
    Node *q3 = create(6);

    q->left = q1;
    q->right = q2;
    q2->right = q3;

    cout << boolalpha << isSameTree(p, q);

    return 0;
}


