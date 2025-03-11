//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++

class Solution {
  public:
  int solve(int i,int n,vector<int>&val,vector<int>& dp)
  {
      if(i==n) return 0;
      if(i>n) return 100000;
      
      if(dp[i]!=-1) return dp[i];
      
      int a = val[i] + solve(i+1,n,val,dp);
      int b = val[i] + solve(i+2,n,val,dp);
      
      return dp[i] = min(a,b);
  }
    int minCostClimbingStairs(vector<int>& cost) {
        int N=cost.size();
        vector<int> dp(N+2,-1);
        int a = solve(0,N,cost,dp);
        int b = solve(1,N,cost,dp);
        
        return min(a,b);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution sln;
        int res = sln.minCostClimbingStairs(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends