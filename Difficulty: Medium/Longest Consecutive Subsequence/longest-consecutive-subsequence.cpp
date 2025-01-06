//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        
        int n=arr.size();
        int maxi=INT_MIN;
        
        set<int>st;
        for (int i:arr){
            st.insert(i);
        }
        
        for (int i :st){
            if (st.find(i-1)==st.end()){
                int count=1;
                int x=i;
                
                while (st.find(x+1)!=st.end()){
                    count++;
                    x++;
                }
                maxi=max(maxi,count);
            }
            
        }
        return maxi;
       
    }
};

/* sort(arr.begin(),arr.end());
        int count=1;
        int maxi=1;
        for (int i=0;i<arr.size()-1;i++){
            if (arr[i]+1==arr[i+1]){
                count++;
                maxi=max(maxi,count);
                
            }else if(arr[i]==arr[i+1])
            {
                continue;
            }
                else{
                count=1;
            }
        }
        return maxi;*/

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