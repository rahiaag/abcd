//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
      sort(arr.begin(),arr.end());
      int n=arr.size();
      
      int count=1;
      int maxCount=0;
      
      for (int i=1;i<n;i++){
          if (arr[i]==(arr[i-1]+1)){
              count++;
          }
          else if (arr[i]==arr[i-1]){
             continue;
          }
          else{
              count=1;
          }
          maxCount=max(maxCount,count);
      }
      return maxCount;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends