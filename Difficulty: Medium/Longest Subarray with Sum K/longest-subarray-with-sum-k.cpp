//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        int maxCount=0;
        unordered_map<int,int>mp;
        int sum=0;
        mp[0]=-1;
        
        for (int i=0;i<n;i++){
            sum+=arr[i];
            if (mp.find(sum-k)!=mp.end()){
                maxCount=max(maxCount,i-mp[sum-k]);
            }
            
            if (mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return maxCount;
        
    }
};

/* int n=arr.size();
        int maxCount=0;
        
        for (int i=0;i<n;i++){
            int sum=arr[i];
            int count=1;
            if (sum==k){
            maxCount=1;
            }
            for (int j=i+1;j<n;j++){
                sum+=arr[j];
                count++;
                if (sum==k){
                    maxCount=max(maxCount,count);
                }
            }
            
        }
        return maxCount;*/

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends