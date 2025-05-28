//{ Driver Code Starts
// Initial Template for C++

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int countNodes(int i) {
        if (i==0){
            return 0;
        }
        if (i==1){
            return 1;
        }
        int val=1;
        for (int j=2;j<=i;j++){
            val*=2;
        }
        return val;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int i;
        cin >> i;
        Solution ob;
        int res = ob.countNodes(i);

        cout << res;
        cout << "\n";
    
cout << "~" << "\n";
}
}

// } Driver Code Ends