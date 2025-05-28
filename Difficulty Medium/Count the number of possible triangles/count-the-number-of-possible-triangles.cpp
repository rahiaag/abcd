//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        sort(arr.begin(),arr.end());
        
        for (int i=n-1;i>=0;i--){
            int low=0;
            int high=i-1;
            
            while (low<high){
                int sum=arr[low]+arr[high];
                if (sum>arr[i]){
                    count+=high-low;
                    high--;
                }
                else{
                    low++;
                }
            }      
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends