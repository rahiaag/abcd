//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long getNextEven(string x) {
        
        while (next_permutation(x.begin(),x.end())){
            if ((x[x.length()-1]-'0')%2==0){
                return stoll(x);
                }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        Solution ob;
        cout << ob.getNextEven(x) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends