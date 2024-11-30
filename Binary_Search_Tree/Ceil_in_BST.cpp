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
int CeilFunction(node *root, int key)
{
    int ceil = -1;
    while (root)
    {
        if (root->data == key)
        {
            ceil = root->data;
            return ceil;
        }
        if (root->data < key)
            root = root->right;
        else
        {
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
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

    int result = CeilFunction(p, 4);
    cout << "The Result is " << result;

    return 0;
}

