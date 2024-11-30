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

Time Complexity :  O(N)
Space Complecity : O(N)

-------------------------------------------------------*/

vector<vector<int>> ZigZagTraversal(Node *root)
{

    vector<vector<int>> result;

    queue<Node *> q;
    q.push(root);

    int count = 0;

    while (!q.empty())
    {
        int n = q.size();
        vector<int> ans;
        count++;

        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            ans.push_back(temp->data);

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        if (count % 2 == 0)
        {
            reverse(ans.begin(), ans.end());
        }
        result.push_back(ans);
    }
    return result;
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

    vector<vector<int>> res = ZigZagTraversal(p);
    for (auto i : res)
    {
        for (int val : i)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}