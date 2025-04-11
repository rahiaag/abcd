//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends

class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s1, string &s2) {

        map<char,int>mp1;
        map<char,int>mp2;
        
        for (auto i:s1){
            mp1[i]++;
        }
        for (auto i:s2){
            mp2[i]++;
        }
        
        for (int i=0;i<s1.size();i++){
            if (mp1[s1[i]]!=mp2[s2[i]])
            return false;
        }
        return true;
    }
};


//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends