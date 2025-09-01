#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define eb emplace_back
#define pb push_back
#define po pop_back
#define pq priority_queue
#define INF 1e9

ll gcd(ll a, ll b){
    if( b>a ) swap(a,b);
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b ){
    return abs(a * b) / gcd(a, b);
}

ll og2(ll x){
    return (64 - __builtin_clzll(x) - 1);
}

const ll MOD = 1000000007;

ll mod_pow(ll base, ll exp) {
    ll result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) 
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}
void solve() {
    int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> color(n, -1);
        bool is_bipartite = true;
        vector<int> comp_a;
        vector<int> comp_b;

        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                color[i] = 0;
                queue<int> q;
                q.push(i);
                int a = 0, b = 0;
                a++;
                while (!q.empty()) {
                    int u = q.front();
                    q.pop();
                    for (int v : adj[u]) {
                        if (color[v] == -1) {
                            color[v] = color[u] ^ 1;
                            if (color[v] == 0) a++;
                            else b++;
                            q.push(v);
                        } else if (color[v] == color[u]) {
                            is_bipartite = false;
                        }
                    }
                }
                comp_a.push_back(a);
                comp_b.push_back(b);
            }
        }

        if (!is_bipartite) {
            cout << 0 << '\n';
            return;
        }

        ll ans = 1;
        for (int i = 0; i < comp_a.size(); i++) {
            ll ways = (mod_pow(2, comp_a[i]) + mod_pow(2, comp_b[i])) % MOD;
            ans = (ans * ways) % MOD;
        }
        cout << ans << '\n';
        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}
