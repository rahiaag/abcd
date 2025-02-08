//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        
        int n=arr.size();
        int sum=0;
        int count=0;
        unordered_map<int,int>mp;
        
        for (int i=0;i<n;i++){
            sum+=arr[i];
            
            if (sum==0){
                count++;
            }
            
            
            if (mp.find(sum-0)!=mp.end()){
                count+=mp[sum-0];
            }
            mp[sum]++;
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
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findSubarray(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends