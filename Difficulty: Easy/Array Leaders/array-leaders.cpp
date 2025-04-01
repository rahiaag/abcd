//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
       int n=arr.size();
       vector<int>ans;
       int maxElement=INT_MIN;
       
       for (int i=n-1;i>=0;i--){
           if (arr[i]>=maxElement){
               maxElement=arr[i];
               ans.push_back(arr[i]);
           }
       }
       reverse(ans.begin(),ans.end());
       return ans;
       
    }
};

/* int n=arr.size();
        vector<int>ans;
        
        for (int i=0;i<n-1;i++){
            int maxi=arr[i];
            for (int j=i+1;j<n;j++){
                maxi=max(maxi,arr[j]);
                }
                if (maxi==arr[i]){
                    ans.push_back(arr[i]);
                }
            }
        ans.push_back(arr[n-1]);
        return ans;*/





//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.leaders(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no leaders are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends