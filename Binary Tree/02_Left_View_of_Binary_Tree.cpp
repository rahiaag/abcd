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

vector<int> leftView(Node *root)
{
    vector<int> res;

    queue<Node *> ans;
    ans.push(root);

    if (root == NULL)
    {
        return res;
    }

    while (!ans.empty())
    {
        int n = ans.size();
        for (int i = 0; i < n; i++)
        {
            Node *temp = ans.front();
            ans.pop();
            if (i == 0)
            {
                res.push_back(temp->data);
            }
            if (temp->left != NULL)
            {
                ans.push(temp->left);
            }
            if (temp->right != NULL)
            {
                ans.push(temp->right);
            }
        }
    }
    return res;
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
    vector<int> result = leftView(p);
    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}