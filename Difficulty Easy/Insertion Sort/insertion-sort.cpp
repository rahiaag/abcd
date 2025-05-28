//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        
        int n = arr.size();

    // Traverse from the second element to the last
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // The element to be placed in the correct position
        int j = i - 1;

        // Shift elements of the sorted part that are greater than key
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
    
        // Insert key at its correct position
        arr[j + 1] = key;
    }
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
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
        obj.insertionSort(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends