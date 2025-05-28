//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        unordered_map<char,int>mp;
        if (s1.size()!=s2.size()){
            return false;
        }
        for (auto i:s1){
            mp[i]++;
        }
        
        for (int i=0;i<s2.size();i++){
            if (mp[s2[i]]==0){
                return false;
            }
            if (mp.find(s2[i])!=mp.end()){
                mp[s2[i]]--;
            }
            
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends