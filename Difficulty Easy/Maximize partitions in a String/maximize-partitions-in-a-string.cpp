//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPartitions(string &s) {
        // code here
        int n=s.length();
        map<int,int> last;
        for(int i=0;i<n;i++){
           last[s[i]-'0'] = i;
        }

        int res = 0;
        int size=0,end=0;

       for(int i=0;i<n;i++){
           end=max(end,last[s[i]-'0']);
           if(i==end){
            res++;
           }
        }

        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends