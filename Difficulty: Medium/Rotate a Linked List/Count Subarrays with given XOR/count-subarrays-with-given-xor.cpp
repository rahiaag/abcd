//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int count=0;
        unordered_map<int,int>mp;
        int xorr=0;
        
        for (int i=0;i<arr.size();i++){
            xorr^=arr[i];
            
            if (xorr==k){
                count++;
            }
            
            if (mp.find(xorr^k)!=mp.end()){
                count+=mp[xorr^k];
            }
            mp[xorr]++;
        }
            
            
        return count;
    }
};

 /*int count=0;
        
        
        for (int i=0;i<arr.size();i++){
            int xorr=arr[i];
            
            if (xorr==k){
                count++;
            }
            for (int j=i+1;j<arr.size();j++){
                xorr^=arr[j];
                
                if (xorr==k){
                    count++;
                }
            }
                
            }
            
            
        return count;*/

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution obj;
        cout << obj.subarrayXor(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends