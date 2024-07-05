#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> dijkstra(int V,vector<vector<int>> adj[],int S){
        set<pair<int,int>> st;
        vector<int> dist(V,1e9);
        st.insert({0,S});
        dist[S]=0;
        while(!st.empty()){
            auto it=*(st.begin());
            int node=it.second;
            int dis=it.first;
            st.erase(it);
            for(auto it:adj[node]){
                int adjNode=it[0];
                int edgw=it[1];
                if(dis+edgw<dist[adjNode]){
                    if(dist[adjNode]!=1e9 ){
                        st.erase({dist[adjNode],adjNode});
                    }
                    
                    dist[adjNode]=dis+edgw;
                    st.insert({dist[adjNode],adjNode});
                    
                }
                 
            }
        }
    }


};
int main(){
     int V = 5; 
    vector<vector<int>> adj[V];

    adj[0].push_back({1, 2});
    adj[0].push_back({4, 1});
    adj[1].push_back({2, 3});
    adj[2].push_back({3, 6});
    adj[4].push_back({2, 2});
    adj[4].push_back({3, 4});

    int S = 0;
    
    Solution obj;
    vector<int> distances = obj.dijkstra(V, adj, S);
    
    for (int i = 0; i < V; i++) {
        cout << "Distance from node " << S << " to node " << i << " is " << distances[i] << endl;
    }

    return 0;
}