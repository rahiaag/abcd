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

bool isSumProperty(Node *root)
{

    if (root == NULL || (root->left == NULL) && (root->right == NULL))
    {
        return true;
    }

    int leftSum = 0;
    int rightSum = 0;

    if (root->left != NULL)
    {
        leftSum = root->left->data;
    }
    if (root->right != NULL)
    {
        rightSum = root->right->data;
    }

    if ((root->data == (leftSum + rightSum)) && isSumProperty(root->left) && isSumProperty(root->right))
    {
        return true;
    }
    return false;
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

    cout << boolalpha << isSumProperty(p);

    return 0;
}
