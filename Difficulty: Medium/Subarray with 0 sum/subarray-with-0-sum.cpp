//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        int value=0;
        
        for (int i=0;i<n;i++){
           
            value+=arr[i];
            if (mp.find(value)!=mp.end()){
                return true;
            }
             if (value==0){
                return true;
            }
            mp[value]++;
        }
       return false;
    }
    
};
/* int n=arr.size();
        
        for (int i=0;i<n;i++){
            int sum=arr[i];
            if (sum==0){
                return true;
            }
            for (int j=i+1;j<n;j++){
                sum+=arr[j];
                if (sum==0){
                    return true;
                }
            }
        }
        return false;*/


//{ Driver Code Starts.

int main() {

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

        Solution obj;
        if (obj.subArrayExists(arr))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends