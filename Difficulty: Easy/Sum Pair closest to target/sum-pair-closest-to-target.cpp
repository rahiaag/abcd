//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        
       int low = 0;
        int high = arr.size() - 1;
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int closestSum = INT_MAX;
        int minDiff = INT_MAX;
        
        while (low < high) {
            int sum = arr[low] + arr[high];
            int diff = abs(target - sum);
            
            // Update closest pair if found
            if (diff < minDiff) {
                minDiff = diff;
                closestSum = sum;
                ans = {arr[low], arr[high]};
            }
            
            if (sum < target) {
                low++;
            } else {
                high--;
            }
        }
        
        return ans;
    }
};

/*
vector<int> sumClosest(vector<int>& arr, int target) {
        
        int low=0;
        int high=arr.size()-1;
        sort (arr.begin(),arr.end());
        vector<int>ans;
        
        while (low<high){
            
            int sum=arr[low]+arr[high];
            
            if (sum==target){
                ans.push_back(arr[low]);
                ans.push_back(arr[high]);
            }
            else if (sum<target){
                low++;
                while (sum<target)
            }
            else{
                high--;
            }
        }
        return ans;
    }
};
*/

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends