//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int n=arr.size();
        int suffix=1;
        int prefix=1;
        int maxProduct=INT_MIN;
        
        for (int i=0;i<n;i++){
            if (prefix==0){
                prefix=1;
            }
            if (suffix==0){
                suffix=1;
            }
            
            prefix*=arr[i];
            suffix*=arr[n-i-1];
            
            maxProduct=max(maxProduct,max(prefix,suffix));
        }
        return maxProduct;
        
    }
};

/*
int maxProduct=INT_MIN;
        
        for (int i=0;i<n;i++){
           int currProduct=1;
            for (int j=i;j<n;j++){
                currProduct*=arr[j];
                maxProduct=max(maxProduct,currProduct);
            }
        }
        return maxProduct;

*/

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // int n, i;
        // cin >> n;
        // vector<int> arr(n);
        // for (i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }

        vector<int> arr;
        string input;

        // Read array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends