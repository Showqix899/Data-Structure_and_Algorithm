#include<bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(vector<int> adj[],int n,int k){
    vector<int> vis(n,0);
    vis[k]=1;
    queue<int> q;
    q.push(k);
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
        
    }
    return bfs;
    

}
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printEdge(vector<int> &ans){
    for(auto it: ans){
        cout<<it<<" ";
    }
}
int main(){
    int n=7;
    vector<int> adj[n];
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    addEdge(adj,4,5);
    addEdge(adj,4,6);
    vector<int> ANS= bfsOfGraph(adj,n-1,1);
    printEdge(ANS);
    

}