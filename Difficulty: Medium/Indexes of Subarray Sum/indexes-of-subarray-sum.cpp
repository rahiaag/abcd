//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
      int n=arr.size();
      vector<int>ans;
      
      for (int i=0;i<n;i++){
          int sum=arr[i];
          if (sum==target){
              ans={i+1,i+1};
              return ans;
          }
          for (int j=i+1;j<n;j++){
              sum+=arr[j];
              if (sum==target){
                  ans={i+1,j+1};
                  return ans;
              }
          }
      }
      if (ans.size()==0){
          ans.push_back(-1);
      }
      return ans;
        
    }
};

































/*  int n=arr.size();
        vector<int>ans;
        
        for (int i=0;i<n;i++){
            int sum=arr[i];
            
            if (sum==target){
                ans.push_back(i+1);
                ans.push_back(i+1);
                return ans;
            }
            for (int j=i+1;j<n;j++){
                sum+=arr[j];
                if (sum==target){
                   ans.push_back(i+1);
                   ans.push_back(j+1); 
                   return ans;
                }
            }
        }
        
        if (ans.size()==0){
            ans.push_back(-1);
        }
        return ans;*/

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends