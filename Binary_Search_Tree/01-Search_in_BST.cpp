// Search in BST take O(N) time but in BST it will take O(log n) why it will happen because we are not traversing equal to the number of node but traversing the node equal to the height of the tree (in worst case)

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

node *create(int data)
{
    node *p = new node;
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

// Iterative Approach

node *SearchBST(node *root, int data)
{
    while (root != NULL && root->data != data)
    {
        root = data < root->data ? root->left : root->right;
    }
    return root;
}

// Recursive Approach

node *searchBSTT(node *root, int data)
{
    /*if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        return root;
    }
    else if (root->data > data)
    {
        return searchBSTT(root->left, data);
    }
    else
    {
        return searchBSTT(root->right, data);
    }*/

    while (root!=NULL && root->data!=data)
    {
        if (root->data<data)
        root=root->left;
        else
        root=root->right;
    }
    return root;
}

int main()
{
    node *p = create(3);
    node *p1 = create(4);
    node *p2 = create(5);
    node *p3 = create(6);

    p2->left = p1;
    p2->right = p3;
    p1->left = p;

    node *result = SearchBST(p, 3);

    if (result != nullptr)
    {
        cout << "Node found with value: " << result->data << endl;
    }
    else
    {
        cout << "Node not found in the BST." << endl;
    }

    return 0;
}