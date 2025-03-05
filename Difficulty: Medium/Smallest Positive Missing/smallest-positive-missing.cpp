//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        sort (arr.begin(),arr.end());
        int index=-1;
        int ans=0;
        int n=arr.size();
        
        for (int i=0;i<arr.size();i++){
            if (arr[i]==1){
                index=i;
                break;
            }
        }
        if (index==-1){
            return 1;
        }
        for (int i=index;i<n-1;i++){
            if (arr[i]+1==arr[i+1] || arr[i]==arr[i+1]){
                continue;
            }
            else{
                ans=arr[i]+1;
                break;
            }
        }
        if (ans==0){
            ans=arr[n-1]+1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
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

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends