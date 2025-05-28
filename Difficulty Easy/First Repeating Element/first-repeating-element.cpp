//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        int val=INT_MAX;
        
        for (int i=0;i<n;i++){
            if (mp.find(arr[i])!=mp.end()){
                val=min(val,mp[arr[i]]+1);
            }
            else{
                mp[arr[i]]=i;
            }
        }
        if (val==INT_MAX)
        return -1;
    
    return val;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.firstRepeated(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends