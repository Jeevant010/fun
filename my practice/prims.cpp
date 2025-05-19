#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int, int> pii;

vector<vector<pii>> prim_mst(const vector<vector<pii>>& graph, int start_vertex) {
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<int> min_weight(n, INT_MAX);
    vector<int> parent(n, -1);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    min_weight[start_vertex] = 0;
    pq.push({0, start_vertex});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (visited[u]) continue;
        visited[u] = true;

        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (!visited[v] && weight < min_weight[v]) {
                min_weight[v] = weight;
                parent[v] = u;
                pq.push({min_weight[v], v});
            }
        }
    }

    // Construct the MST edges
    vector<vector<pii>> mst(n);
    for (int i = 1; i < n; i++) {
        if (parent[i] != -1) {
            int weight = min_weight[i];
            mst[parent[i]].emplace_back(i, weight);
            mst[i].emplace_back(parent[i], weight);
        }
    }

    return mst;
}

void print_mst(const vector<vector<pii>>& mst) {
    cout << "Minimum Spanning Tree Edges:\n";
    for (int u = 0; u < mst.size(); u++) {
        for (const auto& edge : mst[u]) {
            int v = edge.first;
            int weight = edge.second;
            if (u < v) { // To avoid printing edges twice
                cout << u << " - " << v << " : " << weight << "\n";
            }
        }
    }
}

int main() {
    // Example graph represented as adjacency list
    // Graph with 5 vertices (0-4)
    const int V = 5;
    vector<vector<pii>> graph(V);

    // Adding edges
    graph[0].emplace_back(1, 2);
    graph[0].emplace_back(3, 6);
    graph[1].emplace_back(0, 2);
    graph[1].emplace_back(2, 3);
    graph[1].emplace_back(3, 8);
    graph[1].emplace_back(4, 5);
    graph[2].emplace_back(1, 3);
    graph[2].emplace_back(4, 7);
    graph[3].emplace_back(0, 6);
    graph[3].emplace_back(1, 8);
    graph[3].emplace_back(4, 9);
    graph[4].emplace_back(1, 5);
    graph[4].emplace_back(2, 7);
    graph[4].emplace_back(3, 9);

    // Run Prim's algorithm starting from vertex 0
    auto mst = prim_mst(graph, 0);

    // Print the MST
    print_mst(mst);

    return 0;
}