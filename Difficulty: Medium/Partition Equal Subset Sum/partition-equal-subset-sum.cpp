//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int n;
  vector<vector<int>>dp;
  bool solve(vector<int>& arr,int i,int sum){
    if(sum == 0){
        return 1;
    }
    if(i >= n || sum < 0){
        return 0;
    }
    if(dp[i][sum] != -1){
        return dp[i][sum];
    }
    int take =  solve(arr,i+1,sum-arr[i]);
    int nottake = solve(arr,i+1,sum);
    
    return dp[i][sum] = take + nottake;
  }
    bool equalPartition(vector<int>& arr) {
        int sum = 0;
        n = arr.size();
        
        for(int i = 0;i < n;i++){
            sum += arr[i];
        }
        
        if(sum&1){
            return 0;
        }
        
        dp.assign(n,vector<int>(sum/2+1,-1));
        return solve(arr,0,sum/2);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends