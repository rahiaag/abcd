//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        
        int rowBegin=0;
        int colBegin=0;
        int rowEnd=mat.size()-1;
        int colEnd=mat[0].size()-1;
        vector<int>ans;
        
        while (rowBegin<=rowEnd && colBegin<=colEnd){
            
            for(int i=colBegin;i<=colEnd;i++){
                ans.push_back(mat[rowBegin][i]);
            }
            rowBegin++;
            
            for (int i=rowBegin;i<=rowEnd;i++){
                ans.push_back(mat[i][colEnd]);
            }
            colEnd--;
            
             if (rowBegin <= rowEnd) {
            for (int i = colEnd; i >= colBegin; i--)
                ans.push_back(mat[rowEnd][i]);
            rowEnd--;
        }

        // Traverse Up
        if (colBegin <= colEnd) {
            for (int i = rowEnd; i >= rowBegin; i--)
                ans.push_back(mat[i][colBegin]);
            colBegin++;
        }
          
             
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends