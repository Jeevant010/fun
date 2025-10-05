#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
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


void solve() {
    ll n , m1;
    cin >> n >> m1;
    if (m1 > n) {
        cout << "-1\n";
        return;
    }

    v<int> v1(n);
    r(i, n) cin >> v1[i];

    v<int> dp(n - m1 + 1, 0);
    for (int i = 0; i <= n - m1; i++) {
        for (int j = i; j < i + m1; j++)
            dp[i] += v1[j];
    }

    auto ma = min_element(trvs(dp));
    int idx = distance(dp.begin(), ma);
    cout << idx+1 << "\n";



}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}
