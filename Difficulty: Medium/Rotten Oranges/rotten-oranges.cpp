//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        queue<pair<pair<int,int>,int>>q;
       int ansTime=0;
       for(int row=0;row<grid.size();row++){
           for(int col=0;col<grid[row].size();col++){
               if(grid[row][col]==2) {
                   q.push({{row,col},0});
               }
           }
       }
       while(!q.empty()){
           auto fNode=q.front();
           q.pop();
           int row=fNode.first.first;
           int col=fNode.first.second;
           int Time=fNode.second;
           for(int i=0;i<4;i++){
               int newRow=row+dx[i];
               int newCol=col+dy[i];
               if(newRow>=0&&newRow<grid.size()&&newCol>=0&&newCol<grid[0].size()&&grid[newRow][newCol]==1){
                   q.push({{newRow,newCol},Time+1});
                   ansTime=max(ansTime,Time+1);
                   grid[newRow][newCol]=2; 
               }
           }
       }
       
       for(int row=0;row<grid.size();row++){
           for(int col=0;col<grid[row].size();col++){
               if(grid[row][col]==1) return -1;
           }
       }
       
       return ansTime;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(mat);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends