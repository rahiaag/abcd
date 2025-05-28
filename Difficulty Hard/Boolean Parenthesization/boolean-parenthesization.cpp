//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
public:
    // Function to evaluate the boolean operation
    bool evaluate(bool b1, bool b2, char op) {
        if (op == '&') return b1 & b2;
        if (op == '|') return b1 | b2;
        return b1 ^ b2;
    }

    // Function to count the number of ways to parenthesize the expression
    int countWays(string &s) {
        int n = s.size();
        
        // dp[i][j][0] -> False count, dp[i][j][1] -> True count
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, 0)));

        // Initialize base cases
        for (int i = 0; i < n; i += 2) {
            dp[i][i][1] = (s[i] == 'T') ? 1 : 0;
            dp[i][i][0] = (s[i] == 'F') ? 1 : 0;
        }

        // Iterate over increasing lengths of subexpressions
        for (int length = 2; length < n; length += 2) {
            for (int i = 0; i < n - length; i += 2) {
                int j = i + length;
                dp[i][j][0] = dp[i][j][1] = 0;

                for (int k = i + 1; k < j; k += 2) {
                    char op = s[k];

                    int leftTrue = dp[i][k - 1][1];
                    int leftFalse = dp[i][k - 1][0];
                    int rightTrue = dp[k + 1][j][1];
                    int rightFalse = dp[k + 1][j][0];

                    // True evaluations
                    if (evaluate(true, true, op)) dp[i][j][1] += leftTrue * rightTrue;
                    if (evaluate(true, false, op)) dp[i][j][1] += leftTrue * rightFalse;
                    if (evaluate(false, true, op)) dp[i][j][1] += leftFalse * rightTrue;
                    if (evaluate(false, false, op)) dp[i][j][1] += leftFalse * rightFalse;

                    // False evaluations
                    if (!evaluate(true, true, op)) dp[i][j][0] += leftTrue * rightTrue;
                    if (!evaluate(true, false, op)) dp[i][j][0] += leftTrue * rightFalse;
                    if (!evaluate(false, true, op)) dp[i][j][0] += leftFalse * rightTrue;
                    if (!evaluate(false, false, op)) dp[i][j][0] += leftFalse * rightFalse;
                }
            }
        }

        return dp[0][n - 1][1];  // Return the number of ways to evaluate the expression to true
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        int ans = ob.countWays(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends