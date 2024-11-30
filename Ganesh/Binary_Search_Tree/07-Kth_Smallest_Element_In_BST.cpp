#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
int count = 0;
vector<int> result;

void inorder(node *root, int k)
{ // inorder Traversal gives us the ascending order
    if (root != NULL)
    {
        inorder(root->left, k);
        result.push_back(root->data);
        inorder(root->right, k);
    }
}
int smallest(node *root, int k)
{
    inorder(root, k);
    return result[k - 1]; // As the index starts from 0 so that why we use [k-1  ]
}

int main()
{
    node *p = new node(5);
    node *p1 = new node(1);
    node *p2 = new node(2);
    node *p3 = new node(3);
    node *p4 = new node(4);
    node *p5 = new node(6);
    node *p6 = new node(7);
    node *p7 = new node(8);
    node *p8 = new node(9);

    /*
                5
             /     \
          3         8
        /  \       /  \
       2    4     7   9
      /          /
      1         6

    */
    p->left = p3;
    p->right = p7;
    p3->left = p2;
    p3->right = p4;
    p2->left = p1;
    p7->left = p6;
    p7->right = p8;
    p6->left = p5;

    int res = smallest(p, 3);
    cout << "the answer is " << res;
    return 0;
}

