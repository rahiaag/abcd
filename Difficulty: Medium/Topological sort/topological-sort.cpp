//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void DFS(int node,vector<bool>&visited,stack<int>&st,unordered_map<int,list<int>>&adj){
        visited[node]=true;
        for(auto&nbr:adj[node]){
            if(!visited[nbr])
              DFS(nbr,visited,st,adj);
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        stack<int>st;
        vector<int>result;
        vector<bool>visited(V,0);
        unordered_map<int,list<int>>adj;
        vector<int>indegree(V,0);
        for(auto&edg:edges){
            int u=edg[0];
            int v=edg[1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0)q.push(i);
        }
        while(!q.empty()){
            auto fNode=q.front();
            q.pop();
            result.push_back(fNode);
            for(auto&nbr:adj[fNode]){
                indegree[nbr]--;
                if(indegree[nbr]==0)q.push(nbr);
            }
        }
        
        
        // for(int i=0;i<V;i++){
        //     if(!visited[i]){
        //         DFS(i,visited,st,adj);
        //     }
        // }
        
        // while(!st.empty()){
        //     result.push_back(st.top());
        //     st.pop();
        // }
        
        
        return result;
    }
};


//{ Driver Code Starts.

int check(int V, vector<int> &res, vector<vector<int>> adj) {

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);
        vector<vector<int>> edges;

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            edges.push_back({u, v});
        }

        Solution obj;
        vector<int> res = obj.topoSort(V, edges);
        bool ans = check(V, res, adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends