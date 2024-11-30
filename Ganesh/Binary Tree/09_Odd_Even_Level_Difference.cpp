class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       //Your code here
       queue<pair<Node *,int>>q;
       q.push({root,1});
       int odd=0;
       int even=0;
       while(!q.empty()){
           Node * element=q.front().first;
           int lavel=q.front().second;
           q.pop();
           if(lavel%2==0){
               even+=element->data;
               
           }
           else if(lavel %2!=0){
               odd+=element->data;
           }
           if(element->left){
               q.push({element->left,lavel+1});
           }
           if(element->right){
               q.push({element->right,lavel+1});
           }
       }
       return (odd-even);
    }
};




class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       int oddSum=0;
       int evenSum=0;
       int level=0;
       
       queue<Node *>q;
       if (root==NULL){
           return 0;
       }
       q.push(root);
       
       while (!q.empty()){
           int n=q.size();
           level++;
           for (int i=0;i<n;i++){
           Node *temp=q.front();
           q.pop();
           
           if (level%2==0){
               evenSum+=temp->data;
           }
           else{
               oddSum+=temp->data;
           }
           
           if (temp->left!=NULL){
               q.push(temp->left);
           }
           if (temp->right!=NULL){
               q.push(temp->right);
           }
           }
       }
       return (oddSum-evenSum);
    }
};
