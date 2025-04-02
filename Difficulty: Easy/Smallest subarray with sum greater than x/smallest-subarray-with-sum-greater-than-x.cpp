//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int n=arr.size();
        int minCount=INT_MAX;
        
        for (int i=0;i<n;i++){
            int val=arr[i];
            int count=1;
            if (val>x){
                minCount=min(minCount,count);
            }
            for (int j=i+1;j<n;j++){
                val+=arr[j];
                count++;
                if (val>x){
                    minCount=min(minCount,count);
                }
            }
        }
        if (minCount==INT_MAX){
            return 0;
        }
        return minCount;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << "\n~\n";
    }

    return 0;
}
// } Driver Code Ends