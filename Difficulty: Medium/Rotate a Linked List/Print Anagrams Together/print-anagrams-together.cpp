//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

/*
class Solution {
  public:
  
  
  bool anaa(string a,string b){
      unordered_map<int,int>mp;
      
      for (auto i:a){
          mp[i]++;
      }
      for (auto i:b){
          mp[i]--;
      }
      
      if (mp.size()==0){
          return true;
      }
      return false;
  }
    vector<vector<string>> anagrams(vector<string>& arr) {
        vector<vector<string>>ans;
        
        for (int i=0;i<arr.size()-1;i++){
            set<string>res;
            for (int j=i+1;j<arr.size();j++){
                
                bool ana=anaa(arr[i],arr[j]);
                if (ana==true){
                    res.insert(arr[j]);
                    res.insert(arr[i]);
                }
                
            }
            vector<string>hui(res.begin(),res.end());
            ans.push_back(hui);
            
        }
        return ans;
        
    }
};
*/

/*
approach
phele ek word ko naye vector mein daala phir uske letter ke count ko map mein daala dusra
word check kiya uske saare letter aa gaye to usse ussi vector moien daata agar nahi to naye
vector mein daala*/

class Solution {
  public:
  
    vector<vector<string>> anagrams(vector<string>& arr) {
         unordered_map<string, vector<string>> groupMap;

        for (string s : arr) {
            string key = s;                // Copy original string
            sort(key.begin(), key.end()); // Sort to find anagram key
            groupMap[key].push_back(s);   // Group by sorted key
        }

        vector<vector<string>> ans;
        for (auto& group : groupMap) {
            ans.push_back(group.second); // Collect all groups
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

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends