//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int solve(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
      if (i==s1.size()){
          return 0;
      }
      if (j==s2.size()){
          return 0;
      }
      if (dp[i][j]!=-1){
          return dp[i][j];
      }
      int ans=0;
      
      if (s1[i]==s2[j]){
          ans=1+solve(s1,s2,i+1,j+1,dp);
      }
      else{
          ans=max(solve(s1,s2,i+1,j,dp),solve(s1,s2,i,j+1,dp));
      }
      return dp[i][j]= ans;
  }
    int lcs(string &s1, string &s2) {
        vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1));
        return solve(s1,s2,0,0,dp);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends