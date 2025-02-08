//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for (auto i:arr){
            mp[i]++;
        }
        
        for (auto i:mp){
            if (i.second>n/2){
                return i.first;
            }
        }
        return -1;
      
    }
};
opt
  /*int n=arr.size();
        
        sort (arr.begin(),arr.end());
        return arr[n/2];*/

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends