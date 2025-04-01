#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
         int V = adj.size();
        vector<int> res, vis(V, 0);
        function<void(int)> traverse = [&](int v) {
            vis[v] = 1;
            res.push_back(v);
            for (int u : adj[v])
                if (!vis[u]) traverse(u);
        };
        for (int i = 0; i < V; i++)
            if (!vis[i]) traverse(i);
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}