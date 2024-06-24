#include<bits/stdc++.h>
using namespace std;
vector <int> Bfs(int n,vector<int> adj[]){
    int vis[n]={0};
    vis[0]=1;
    queue <int> q;
    q.push(0);
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
void addEdge(vector <int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void Ans(vector <int> &ans){
    for( int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector <int> adj[6];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    addEdge(adj,3,5);
    addEdge(adj,4,5);
    vector<int> ans=Bfs(6,adj);
    Ans(ans);

}