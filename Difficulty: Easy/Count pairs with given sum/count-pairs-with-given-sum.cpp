//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
      
      /*
      int n=arr.size();
      int count=0;
      
      for (int i=0;i<n-1;i++){
          for (int j=i+1;j<n;j++){
              if (arr[i]+arr[j]==target){
                  count++;
              }
          }
      }
      return count;
      */
      
        int count=0;
        int n=arr.size();
        unordered_map<int,int>mp;
        
        for (int i=0;i<n;i++){
        int secElement=target-arr[i];
        
        if (mp.find(secElement)!=mp.end()){
            count+=mp[secElement];
        }
        mp[arr[i]]++;
        }
        return count;
        
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends