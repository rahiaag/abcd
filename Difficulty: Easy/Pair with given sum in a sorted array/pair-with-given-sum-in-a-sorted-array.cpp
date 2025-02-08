//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        
       /* int n=arr.size();
        int count=0;
        
        unordered_map<int,int>mp;
        
        for (int i=0;i<n;i++){
            
            int comp=target-arr[i];
            
            if (mp.find(comp)!=mp.end()){
                count+=mp[comp];
            }
            mp[arr[i]]++;
        }
        return count;*/
        
         int left = 0; int right = arr.size() - 1;int pairs = 0;
        
        while (left < right) {
            int sum = arr[left] + arr[right];
            
            if (sum == target) {
                pairs += 1;
                int tempLeft = left + 1;
                while (tempLeft < right && arr[tempLeft] == arr[tempLeft - 1]) {
                    pairs += 1;
                    tempLeft++;
                }
                
                int tempRight = right - 1;
                while (left < tempRight && arr[tempRight] == arr[tempRight + 1]) {
                    pairs += 1;
                    tempRight--;
                }
                
                left++;
                right--;
            }
            
            else if (sum > target) {
                right--;
            }
            
            else {
                left++;
            }
        }
        
        return pairs;
    }
};

/*
temporary vector 
vector<int>vc={a,b};


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