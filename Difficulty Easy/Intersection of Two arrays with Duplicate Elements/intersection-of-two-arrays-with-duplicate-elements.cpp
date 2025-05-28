//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        set<int>st;
        
        for (auto i:a){
            st.insert(i);
        }
        set<int>res;
        
        for (int i=0;i<b.size();i++){
            if (st.find(b[i])!=st.end()){
                res.insert(b[i]);
            }
        }
        for (auto i=res.begin();i!=res.end();i++){
            ans.push_back(*i);
        }
        
        return ans;
        
        /*vector<int>ans;
        set<int>mp;

        for (auto i:a){
            mp.insert(i);
        }
        
        for (int i=0;i<b.size();i++){
            if (mp.find(b[i])!=mp.end())
            ans.push_back(b[i]);
            mp.erase(b[i]);
        }
        
        /*set<int>mp;
        
        
        for(int i=0;i<a.size();i++){
            for (int j=0;j<b.size();j++){
                if (a[i]==b[j]){
                    mp.insert(a[i]);
                }
            }
        }
        for (auto i:mp){
            ans.push_back(i);
        }
        
        
        return ans;*/
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1, arr2;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Solution ob;
        vector<int> res = ob.intersectionWithDuplicates(arr1, arr2);
        sort(res.begin(), res.end());

        if (res.size() == 0) {
            cout << "[]" << endl;
        } else {
            for (auto it : res)
                cout << it << " ";
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends