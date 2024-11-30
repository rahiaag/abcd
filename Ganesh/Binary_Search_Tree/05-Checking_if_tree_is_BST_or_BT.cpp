#include <iostream>
#include<bits/stdc++.h>
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

void inorder(node *root){
    if (root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
long long val=INT_MIN;
void checker(node *root,bool &ans){
    if (root==NULL)
    return;

    checker(root->left,ans);
    if (val>root->data)
    ans=false;
    val=root->data;
    checker(root->right,ans);
}
bool BSTcheck(node *root){
    bool ans=true;
    checker(root,ans);
    return ans;
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
p->left=p3;
p->right=p7;
p3->left=p2;
p3->right=p4;
p2->left=p1;
p7->left=p6;
p7->right=p8;
p6->left=p5;

//inorder(p);
bool result=BSTcheck(p);
cout<<boolalpha<<result;



return 0;

}
