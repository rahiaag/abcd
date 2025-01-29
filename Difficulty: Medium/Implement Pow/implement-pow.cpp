//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
         double ans=1.0;
         long long expo=e;
        
       if (e<0){
          b=1/b;
          expo=-expo;   
        }
        
        while (expo>0){
            if (expo%2==1){
                ans*=b;
            }
            b*=b;
            expo/=2;
        }
         
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends