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
        int n=arr.size();
        vector<vector<int>>result;
        unordered_map<int,int>mp;
        
        for (int i=0;i<n;i++){
            int comp=arr[i];
            int pmoc=-1*(comp);
            
            if (mp.find(pmoc)!=mp.end()){
                vector<int>ans={comp,pmoc};
                sort(ans.begin(),ans.end());
                  result.push_back(ans);
            }
            mp[comp]++;
          
        }
        sort(result.begin(),result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};
/*
class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>result;
        for (int i=0;i<n-1;i++){
            vector<int>ans;
            for (int j=i+1;j<n;j++){
                if (arr[i]+arr[j]==0){
                    ans={arr[i],arr[j]};
                    sort(ans.begin(),ans.end());
                }
            }
            result.push_back(ans);
        }
        sort(result.begin(),result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};*/

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