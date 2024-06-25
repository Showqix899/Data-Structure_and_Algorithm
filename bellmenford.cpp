#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> dist(V, INT_MAX);
        dist[S] = 0;

        // Relax edges V-1 times
        for (int i = 0; i < V - 1; i++) {
            for (auto it : edges) {
                int u = it[0];
                int v = it[1];
                int wt = it[2];
                if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                }
            }
        }

        // Check for negative-weight cycles
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                return { -1 }; // Return -1 if a negative-weight cycle is detected
            }
        }

        return dist;
    }
};

int main() {
    int V = 5; // Number of vertices
    vector<vector<int>> edges = {
        {0, 1, -1},
        {0, 2, 4},
        {1, 2, 3},
        {1, 3, 2},
        {1, 4, 2},
        {3, 2, 5},
        {3, 1, 1},
        {4, 3, -3}
    };
    int S = 0; // Source vertex

    Solution sol;
    vector<int> distances = sol.bellman_ford(V, edges, S);

    if (distances.size() == 1 && distances[0] == -1) {
        cout << "Graph contains a negative-weight cycle" << endl;
    } else {
        cout << "Vertex Distance from Source" << endl;
        for (int i = 0; i < V; i++) {
            cout << i << "\t\t" << distances[i] << endl;
        }
    }

    return 0;
}
