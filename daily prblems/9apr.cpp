#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for (auto& e : edges) adj[e[0]].push_back(e[1]), adj[e[1]].push_back(e[0]);
        vector<int> disc(V, -1), low(V), res;
        vector<bool> ap(V), vis(V);
        int time = 0;

        function<void(int, int)> dfs = [&](int u, int p) {
            vis[u] = true;
            disc[u] = low[u] = time++;
            int children = 0;
            for (int v : adj[u]) {
                if (v == p) continue;
                if (!vis[v]) {
                    dfs(v, u);
                    low[u] = min(low[u], low[v]);
                    if (p != -1 && low[v] >= disc[u]) ap[u] = true;
                    ++children;
                } else {
                    low[u] = min(low[u], disc[v]);
                }
            }
            if (p == -1 && children > 1) ap[u] = true;
        };

        for (int i = 0; i < V; ++i)
            if (!vis[i]) dfs(i, -1);
        for (int i = 0; i < V; ++i)
            if (ap[i]) res.push_back(i);
        return res.empty() ? vector<int>{-1} : res;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> edges;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        Solution obj;
        vector<int> ans = obj.articulationPoints(V, edges);
        sort(ans.begin(), ans.end());
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}