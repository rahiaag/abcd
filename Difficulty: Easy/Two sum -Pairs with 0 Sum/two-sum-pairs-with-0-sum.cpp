//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        
        vector<vector<int>>result;
        set<int>st;
        for (auto i:arr){
            st.insert(i);
        }
        unordered_map<int,int>mp;
        for (auto i:arr){
            mp[i]++;
        }
        
        for (auto i:mp){
            if (i.first==0){
                if (i.second>=2){
                    vector<int>ans={0,0};
                    result.push_back(ans);
                }
            }
        }
        
        int n=st.size();
        
        
          for (auto it = st.begin(); it != st.end(); ++it){
              
            int complement=*it;
            
            if (complement!=0){
            int an=complement*(-1);
            
            
            if (st.find(an)!=st.end()){
                vector<int>ans={complement,an};
                sort(ans.begin(),ans.end());
                result.push_back(ans);
            }
            }
          }
            
          
        sort(result.begin(),result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};

 /* int n=arr.size();
       unordered_map<int,int>mp;
        vector<int>res;
        vector<vector<int>>result;
        
        for (int i=0;i<n-1;i++){
            int complement=arr[i];
            int ans=complement*(-1);
            if (mp.find(ans)!=mp.end()){
                res.push_back(arr[i]);
                res.push_back(ans);
                sort(res.begin(),res.end());
            }
            mp[arr[i]]++;
            
            result.push_back(res);
        }
        sort(result.begin(),result.end());
        return result;*/
/*  int n=arr.size();
        
        vector<vector<int>>result;
        
        for (int i=0;i<n-1;i++){
            vector<int>ans;
            for (int j=i+1;j<n;j++){
                if ((arr[i]+arr[j])==0){
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    sort (ans.begin(),ans.end());
                    break;
                }
            }
            result.push_back(ans);
        }
        sort(result.begin(),result.end());
        return result;
        
        Problem give duplicate and time complexity O(n^2)
        */

//{ Driver Code Starts.
//Back-end complete function Template for C++

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        // char c;cin>>c;
        Solution obj;
        vector<vector<int>> res = obj.getPairs(arr);
        if (res.size() == 0) {
            cout << endl;
        } else
            Matrix::print(res);
        cout << "~" << endl;
    }
}

// } Driver Code Ends