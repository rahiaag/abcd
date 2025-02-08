//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        vector<int>row;
        vector<int>column;
        
        for (int i=0;i<mat.size();i++){
            for (int j=0;j<mat[0].size();j++){
                if (mat[i][j]==0){
                    row.push_back(i);
                    column.push_back(j);
                }
            }
        }
        
        for (int i=0;i<row.size();i++){
            int index=row[i];
            for (int j=0;j<mat[0].size();j++){
                mat[index][j]=0;
            }
        }
        
        for (int i=0;i<column.size();i++){
            int index=column[i];
            for (int j=0;j<mat.size();j++){
                mat[j][index]=0;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends