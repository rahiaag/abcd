//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countWays(int n) {
        int a=1;
        int b=2;
        
        if (n==1){
            return a;
        }
        if (n==2){
            return b;
        }
        
        for (int i=3;i<=n;i++){
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};

/*

if (n==1){
            return 1;
        }
        if (n==2){
            return 2;
        }
        return countWays(n-1)+countWays(n-2);
        */

//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends