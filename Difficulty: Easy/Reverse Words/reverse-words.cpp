//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        int i = 0, j = 0, n = s.size();
    
    reverse(s.begin(), s.end());  // Step 1: Reverse the entire string
    
    while (i < n) {
        while (i < n && s[i] == ' ') i++; // Skip spaces
        
        if (i == n) break; // Stop if end of string is reached
        
        if (j > 0) s[j++] = ' '; // Add a single space before the next word
        
        int start = j;
        while (i < n && s[i] != ' ') s[j++] = s[i++]; // Move the word
        
        reverse(s.begin() + start, s.begin() + j); // Reverse the word
    }
    
    return s.substr(0, j);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;     // Read the number of test cases
    cin.ignore(); // Consume the newline character after reading the integer

    while (t--) {
        string s;
        getline(cin, s); // Read the string input

        string str = s.substr(1, s.size() - 2); // Remove surrounding quotes
        Solution obj;                       // Create an object of the Solution class
        string ans = obj.reverseWords(str); // Reverse the words in the string
        cout << '"';                        // Print opening quote
        cout << ans;                        // Print the result
        cout << '"';                        // Print closing quote
        cout << endl;                       // Print a newline
    }
    return 0; // Return 0 to indicate successful execution
}

// } Driver Code Ends