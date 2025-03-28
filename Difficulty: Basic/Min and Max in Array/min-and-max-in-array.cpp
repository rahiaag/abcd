//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
      int n=arr.size();
      sort(arr.begin(),arr.end());
      return{arr[0],arr[n-1]};
    }
};


/*  int n=arr.size();
        int minElement=INT_MAX;
        int maxElement=INT_MIN;
        
        for (int i=0;i<n;i++){
            if (arr[i]>maxElement){
                maxElement=arr[i];
            }
            if (arr[i]<minElement){
                minElement=arr[i];
            }
        }
        return {minElement,maxElement};*/

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
        pair<int, int> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends