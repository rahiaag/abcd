//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        
        int n=arr.size();
        int firstOccurence=-1;
        int lastOccurence=-1;
        
        for (int i=0;i<n;i++){
            if (arr[i]==x){
                firstOccurence=i;
                break;
            }
        }
        for (int i=n-1;i>=0;i--){
            if (arr[i]==x){
                lastOccurence=i;
                break;
            }
        }
        return {firstOccurence,lastOccurence};
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
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends