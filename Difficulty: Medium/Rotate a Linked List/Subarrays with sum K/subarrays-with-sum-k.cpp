//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++


class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        int n=arr.size();
        int count=0;
        
        unordered_map<int,int>mp;
        mp[0]++;
        int sum=0;
        
        for (int i:arr){
            sum+=i;
            int comp=sum-k;
            if (mp.find(comp)!=mp.end()){
                count+=mp[comp];
            }
            mp[sum]++;
        }
        return count;
    }
};

/*
class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        int n=arr.size();
        int count=0;
        
        for (int i=0;i<n;i++){
            int sum=arr[i];
            if (sum==k){
                count++;
            }
            for (int j=i+1;j<n;j++){
                sum+=arr[j];
                if (sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};*/

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends