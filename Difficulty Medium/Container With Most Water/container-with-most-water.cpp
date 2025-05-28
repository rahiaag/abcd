//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int res=0;
        
        while (low<high){
           int temp=min(arr[low],arr[high])*(high-low);
            res=max(temp,res);
            
            if (arr[low]<arr[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return res;
       
    }
};

/* int n=arr.size();
        if (n<=1){
            return 0;
        }
        int maxElement=0;
        int sum=0;

        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
        
                sum=(j-i)*min(arr[i],arr[j]);
                maxElement=max(maxElement,sum);
            }
        }
        return maxElement;*/

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
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends