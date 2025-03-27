//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
     int n=arr.size();
     int maxSum=INT_MIN;
     int currSum=0;
     
     for (int i=0;i<n;i++){
         currSum=max(currSum+arr[i],arr[i]);
         maxSum=max(currSum,maxSum);
     }
     return maxSum;
    }
};

 /*  int n=arr.size();
        int sum=0;
        int maxSum=INT_MIN;
        for (int i=0;i<n;i++){
            sum=arr[i];
            maxSum=max(maxSum,sum);
            for (int j=i+1;j<n;j++){
                sum+=arr[j];
                maxSum=max(sum,maxSum);
            }
        }
        return maxSum;*/

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl << "~" << endl;
    }
}
// } Driver Code Ends