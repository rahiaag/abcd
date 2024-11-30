class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        int maxi=INT_MIN;
        
        queue<Node *>q;
        
        q.push(root);
        
        while (!q.empty()){
            int n=q.size();
            int count=0;
            for (int i=0;i<n;i++){
                Node *temp=q.front();
                q.pop();
                count+=1;
                
                if (temp->left!=NULL){
                    q.push(temp->left);
                }
                if (temp->right!=NULL){
                    q.push(temp->right);
                }
                
                
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
};