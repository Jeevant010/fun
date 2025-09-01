#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define trvs(a) a.begin(), a.end()
#define v has_virtual_destructor
#define m unordered_map
#define INF 1e9


static const int MOD = 998244353;

long long modexp(long long base, long long exp) {
    long long res = 1 % MOD;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

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



void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> l(n+1), r(n+1), p(n+1), q(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i] >> p[i] >> q[i];
    }

    // Prepare list of segments ending at each position
    vector<vector<pair<int,long long>>> segEnd(m+1);
    // We'll also accumulate product of Q's:
    long long productNum = 1, productDen = 1;
    for (int i = 1; i <= n; i++) {
        // Compute Q_i factors: (q_i - p_i) and q_i
        long long qi = q[i];
        long long pi = p[i];
        long long diff = (qi - pi) % MOD;
        if (diff < 0) diff += MOD;
        productNum = (productNum * diff) % MOD;
        productDen = (productDen * qi) % MOD;

        // Compute W_i = p_i * inv(q_i - p_i) mod
        long long invDiff = modexp(diff, MOD - 2);
        long long Wi = (pi % MOD) * invDiff % MOD;
        segEnd[r[i]].push_back({l[i], Wi});
    }

    // Compute the product of Q_i = productNum * inv(productDen) mod
    long long invProductDen = modexp(productDen, MOD - 2);
    long long productQ = (productNum * invProductDen) % MOD;

    // DP array: dp[x] = total weight to cover [1..x]
    vector<long long> dp(m+1);
    dp[0] = 1;  // base case: empty cover of [1..0]

    // Compute dp for each position
    for (int x = 1; x <= m; x++) {
        long long ways = 0;
        // For each segment ending at x, accumulate dp[l-1] * W
        for (auto &seg : segEnd[x]) {
            int start = seg.first;
            long long W = seg.second;
            ways = (ways + dp[start - 1] * W) % MOD;
        }
        dp[x] = ways;
    }

    // The final probability is dp[m] * productQ (mod)
    long long answer = (dp[m] * productQ) % MOD;
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t =1;
    while (t--) {
        solve();
    }
    
    return 0;
}
