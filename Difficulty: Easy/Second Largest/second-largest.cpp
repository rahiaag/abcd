//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
        unordered_set<int>result(arr.begin(),arr.end());
        
        priority_queue<int,vector<int>,greater<int>>ans;
        
        int sizeofarr=result.size();
        if (sizeofarr<2){
            return -1;
        }
        
        for (auto i:result){
            ans.push(i);
            
            if (ans.size()>2){
                ans.pop();
            }
        }
        int n=ans.top();
        return n;
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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends