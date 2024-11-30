class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        
        queue<Node*>q;
        int maxi=INT_MIN;
        
        q.push(root);
        
        while (!q.empty()){
            int n=q.size();
            int sum=0;
            for (int i=0;i<n;i++){
                Node *temp=q.front();
                q.pop();
                sum+=temp->data;
                
                
                if (temp->left!=NULL){
                    q.push(temp->left);
                }
                if (temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};