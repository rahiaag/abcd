#include <iostream>
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
/*
node *createNode(int data)
{
    node *n;       
    n = new node;    
    n->data = data;  
    n->left = NULL;  
    n->right = NULL; 
    return n;        
}
*/
node *LeastCommon(node *root, node *p, node *q)
    {
        if (root == NULL)
            return NULL;

        if (root->data < p->data && root->data < q->data)
        return LeastCommon(root->right,p,q);

        if (root->data > p->data && root->data > q->data){
        return LeastCommon(root->left,p,q);
        }
        return root;
    }

int main()
{
        
    node *p = new node(23);
    node *p1 = new node(12);
    node *p2 = new node(43);
    node *p3 = new node(2);
    
/*
   node *p = createNode(5);
    node *p1 = createNode(3);
    node *p2 = createNode(6);
    node *p3 = createNode(2);*/

    p->left = p1;
    p->right = p2;
    p1->left = p3;

    node *result=LeastCommon(p,p1,p2);
    cout<<"The result is :"<<result->data<<endl;

    return 0;
}