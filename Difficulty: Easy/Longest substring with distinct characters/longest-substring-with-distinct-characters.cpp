//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
             int n = s.size();
        unordered_map<char, int> mp; // Map to store the last index of each character
        int maxi = 0;               // Maximum length of unique substring
        int start = 0;              // Start index of the current substring
        
        for (int end = 0; end < n; end++) {
            // If the character is already in the map and is part of the current window
            if (mp.find(s[end]) != mp.end() && mp[s[end]] >= start) {
                start = mp[s[end]] + 1; // Move the start pointer
            }
            mp[s[end]] = end;           // Update the last index of the character
            maxi = max(maxi, end - start + 1); // Calculate the length of the current substring
        }
        
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends