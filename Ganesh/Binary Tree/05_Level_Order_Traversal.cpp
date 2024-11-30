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

vector<int> LevelOrder(Node *root)
{
    queue<Node *> ans;
    vector<int> result;

    ans.push(root);

    if (root == NULL)
    {
        return result;
    }

    while (!ans.empty())
    {
        Node *temp = ans.front();
        ans.pop();
        result.push_back(temp->data);

        if (temp->left != NULL)
        {
            ans.push(temp->left);
        }
        if (temp->right != NULL)
        {
            ans.push(temp->right);
        }
    }
    return result;
}

/*-----------------------------------------------------

Time Complexity :  O(N)
Space Complecity : O(N)

-------------------------------------------------------*/

vector<vector<int>> LeverOrderTraversal(Node *root)
{

    vector<vector<int>> result;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        vector<int> ans;

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

    /*vector<int> res = LevelOrder(p);

    for (auto i : res)
    {
        cout << i << " ";
    }*/

    vector<vector<int>> res = LeverOrderTraversal(p);
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
