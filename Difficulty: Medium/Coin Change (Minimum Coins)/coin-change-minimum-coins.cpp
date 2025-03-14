//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(vector<int>& coins,int i,int sum,vector<vector<int>>&dp){
        if (sum==0){
            return 0;
        }
        if (sum<0 || i>=coins.size()){
            return INT_MAX/2;
        }
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        int take=1+solve(coins,i,sum-coins[i],dp);
        int no_take=solve(coins,i+1,sum,dp);
        return dp[i][sum]=min(take,no_take);
    }
    int minCoins(vector<int> &coins, int sum) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        int res=solve(coins,0,sum,dp);
        return res==INT_MAX/2 ? -1:res;
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends