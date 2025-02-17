//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        sort(A.begin(),A.end(),greater<int>());
        sort(B.begin(),B.end(),greater<int>());
        vector<int>ans;
        priority_queue<pair<int,pair<int,int>>>pq;
        set<pair<int,int>>visited;
        
        pq.push({A[0]+B[0],{0,0}});
        visited.insert({0,0});
        
        for (int i=0;i<K;i++){
            auto it=pq.top();
            pq.pop();
            int value=it.first;
            int row=it.second.first;
            int col=it.second.second;
            ans.push_back(value);
            
            if (row+1<N && col<N && visited.find({row+1,col})==visited.end()){
                pq.push({A[row+1]+B[col],{row+1,col}});
                visited.insert({row+1,col});
            }
            if(row<N && col+1<N && visited.find({row,col+1})==visited.end()){
                
                pq.push({A[row]+B[col+1],{row,col+1}});
                visited.insert({row,col+1});
        }
        }
       return ans;
    }
};

 /*vector<int>ans;
        for (int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                ans.push_back(A[i]+B[j]);
            }
        }
        priority_queue<int>pq;
        for (int i=0;i<ans.size();i++){
            pq.push(ans[i]);
        }
        
        vector<int>result;
        for (int i=0;i<K;i++){
            int val=pq.top();
            result.push_back(val);
            pq.pop();
        }
        return result;*/

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends