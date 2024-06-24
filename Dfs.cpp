#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    void dfs(int node, vector<int> adj[], int vis[], vector<int>& ls) {
        vis[node] = 1;
        ls.push_back(node);
        for(auto it : adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vis, ls);
            }
        }
    }

    public:
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        int vis[v] = {0};
        int start = 0;
        vector<int> ls;
        dfs(start, adj, vis, ls);
        return ls;
    }
};
void addEdge(int u,int v,vector<int> adj[]){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int V = 5; 
    vector<int> adj[V]; 

    addEdge(0, 1, adj);
    addEdge(0, 2, adj);
    addEdge(1, 3, adj);
    addEdge(2, 4, adj);
    
    

    Solution obj;
    vector<int> result = obj.dfsOfGraph(V, adj);

    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}
