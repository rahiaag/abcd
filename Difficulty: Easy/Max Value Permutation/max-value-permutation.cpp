//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  #define MOD 1000000007
    int maxValue(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        long long ans=0;
      
        int n=arr.size();
        
        for (int i=0;i<n;i++){
            ans=(ans+(1LL* i*arr[i])%MOD)%MOD;
        }
        return ans;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.maxValue(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends