//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {

        int count=0;
        int low=0;
        int n=arr.size();
        int high=arr.size()-1;
        
        unordered_map<int,int>mp;
        
        for (int i=0;i<n;i++){
            
            int comp=target-arr[i];
            
            if (mp.find(comp)!=mp.end()){
                count+=mp[comp];
            }
            mp[arr[i]]++;
        }
                
            
        
        return count;
    }
};

/*

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int n=arr.size();
        int count=0;
        
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if (arr[i]+arr[j]==target){
                    count++;
                }
            }
        }
        return count;
    }
};


*/

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends