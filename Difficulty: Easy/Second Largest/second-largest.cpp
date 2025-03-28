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
       
       set<int>st;
       for (auto i:arr){
           st.insert(i);
       }
       int n=st.size();
       if (n<2){
           return -1;
       }
       auto it=st.begin();
       advance(it,n-2);
       
       return *it;
    }
};


/* int n=arr.size();
        
        if (n<2)return -1;
        
        int first=INT_MIN;
        int second=INT_MIN;
        
        for (auto num:arr){
            if (num>first){
                second=first;
                first=num;
            }else if (num>second && num!=first){
                second=num;
            }
        }
        return (second==INT_MIN)?-1:second;*/

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
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends