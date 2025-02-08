//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        int count=1;
        int maxLength=INT_MIN;
        
        
        unordered_set<int>st;
        
        for (auto i:arr){
            st.insert(i);
        }
        for (int i:st){
            if (st.find(i-1)==st.end()){
                count=1;
                int num=i;
                
            while(st.find(num+1)!=st.end()){
                count++;
                num++;
            }
            maxLength=max(count,maxLength);
            }
        }
        return maxLength;
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
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends