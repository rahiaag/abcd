//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*Complete the function below*/

class Solution {
  public:
  bool check(int val){
      string ans=to_string(val);
      int low=0;
      int high=ans.size()-1;
      while (low<high){
          if (ans[low++]!=ans[high--]){
              return false;
          }
      }
      return true;
  }
    bool isPalinArray(vector<int> &arr) {
        
        for (int i=0;i<arr.size();i++){
            if (check(arr[i])==false){
                return false;
            }
        }
        return true;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.isPalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends