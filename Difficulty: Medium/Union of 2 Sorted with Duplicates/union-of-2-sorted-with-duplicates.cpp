//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

/*
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        int n=a.size();
        set<int>st;
        
        for (int num:a){
            st.insert(num);
        }
        
        for (int i=0;i<b.size();i++){
            if (st.find(b[i])==st.end()){
                
            }
        }
    }
};*/
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> result;
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                if (result.empty() || result.back() != a[i]) 
                    result.push_back(a[i]);
                i++;
            } 
            else if (a[i] > b[j]) {
                if (result.empty() || result.back() != b[j]) 
                    result.push_back(b[j]);
                j++;
            } 
            else { // If both are equal, insert only once
                if (result.empty() || result.back() != a[i]) 
                    result.push_back(a[i]);
                i++, j++;
            }
        }
        
        // Insert remaining elements
        while (i < n) {
            if (result.empty() || result.back() != a[i]) 
                result.push_back(a[i]);
            i++;
        }
        while (j < m) {
            if (result.empty() || result.back() != b[j]) 
                result.push_back(b[j]);
            j++;
        }
        
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends