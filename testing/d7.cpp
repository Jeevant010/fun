#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n);
        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> parent0(n, -1);
        vector<int> depth(n, 0);
        vector<int> sz(n, 0);
        vector<vector<int>> children(n);
        vector<int> order;
        queue<int> q1;
        q1.push(0);
        parent0[0] = -1;
        depth[0] = 0;
        while (!q1.empty()) {
            int u = q1.front(); q1.pop();
            order.push_back(u);
            for (int v : adj[u]) {
                if (v == parent0[u]) continue;
                parent0[v] = u;
                depth[v] = depth[u] + 1;
                children[u].push_back(v);
                q1.push(v);
            }
        }

        reverse(order.begin(), order.end());
        for (int u : order) {
            sz[u] = 1;
            for (int v : children[u]) {
                sz[u] += sz[v];
            }
        }

        long long S0 = 0;
        for (int i = 0; i < n; i++) {
            S0 += depth[i];
        }

        vector<long long> S_arr(n, 0);
        S_arr[0] = S0;
        vector<bool> visited(n, false);
        queue<int> q2;
        q2.push(0);
        visited[0] = true;
        while (!q2.empty()) {
            int u = q2.front(); q2.pop();
            for (int v : adj[u]) {
                if (visited[v]) continue;
                long long comp_size;
                if (v == parent0[u]) {
                    comp_size = (long long) n - sz[u];
                } else {
                    comp_size = sz[v];
                }
                S_arr[v] = S_arr[u] + n - 2 * comp_size;
                visited[v] = true;
                q2.push(v);
            }
        }

        int root = -1;
        for (int i = 0; i < n; i++) {
            if (S_arr[i] == n) {
                root = i;
                break;
            }
        }
        if (root == -1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            vector<bool> vis(n, false);
            queue<int> q3;
            q3.push(root);
            vis[root] = true;
            vector<pair<int, int>> edges;
            while (!q3.empty()) {
                int u = q3.front(); q3.pop();
                for (int v : adj[u]) {
                    if (vis[v]) continue;
                    vis[v] = true;
                    edges.push_back({u, v});
                    q3.push(v);
                }
            }
            for (auto &e : edges) {
                cout << e.first + 1 << " " << e.second + 1 << '\n';
            }
        }
    }
    return 0;
}