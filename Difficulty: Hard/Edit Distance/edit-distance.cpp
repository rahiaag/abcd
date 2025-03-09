//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int fun(string &str1, string &str2, int i, int j, vector<vector<int>> &vec){
    if (i < 0){
        return j + 1;
    }
    if (j < 0){
        return i + 1;
    }
    if (i < 0 && j < 0)
        return 0;
    if (vec[i][j] != -1){
        return vec[i][j];
    }
    if (str1[i] == str2[j]){
        return fun(str1, str2, i - 1, j - 1, vec);
    }
    int ans = min({1 + fun(str1, str2, i, j - 1, vec), 1 + fun(str1, str2, i - 1, j, vec), 1 + fun(str1, str2, i - 1, j - 1, vec)});
    vec[i][j] = ans;
    return ans;
}
    // Function to compute the edit distance between two strings
    int editDistance(string& str1, string& str2) {
    vector<vector<int>> vec(str1.size(), vector<int>(str2.size(), -1));
    return fun(str1, str2, str1.size() - 1, str2.size() - 1, vec);
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);
        Solution ob;
        int ans = ob.editDistance(s1, s2);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends