//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {

        int left=0;
        int right=arr.size()-1;
        int maxLeft=0;
        int maxRight=0;
        int res=0;
        
        while (left<right){
            if (arr[left]<=arr[right]){
                if (arr[left]>=maxLeft){
                    maxLeft=max(maxLeft,arr[left]);
                }
                else{
                    res+=maxLeft-arr[left];
                }
                left++;
            }
            else{
                if (arr[right]>=maxRight){
                    maxRight=max(maxRight,arr[right]);
                }
                else{
                    res+=maxRight-arr[right];
                }
                right--;
            }
        }
        return res;
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
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends