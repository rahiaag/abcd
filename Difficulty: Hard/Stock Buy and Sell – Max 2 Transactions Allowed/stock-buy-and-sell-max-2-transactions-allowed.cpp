//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int k=2;
        int n=(int)prices.size();
        
        vector<vector<int>>dp_prev(3,vector<int>(k+1,0));

        for(int i=0;i<=k;i++)
        {
            dp_prev[1][i]=-(int)(1e9);
        }
        for(int i=n-1;i>=0;i--)
        {
           vector<vector<int>>dp_curr(3,vector<int>(k+1,0));
            for(int j=k-1;j>=0;j--)
            {
                dp_curr[0][j]=max({dp_curr[0][1],dp_prev[0][j],-prices[i]+dp_prev[1][j]});
                dp_curr[1][j]=max({dp_prev[1][j],dp_curr[1][j],prices[i]+dp_prev[0][j+1]});
                
            }
            dp_prev=dp_curr;
        }
        return dp_prev[0][0];
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends