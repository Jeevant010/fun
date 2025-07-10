#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

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
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    vector<int> d(n + 1, -1e9);
    d[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (i >= a) d[i] = max(d[i], d[i - a] + 1);
        if (i >= b) d[i] = max(d[i], d[i - b] + 1);
        if (i >= c) d[i] = max(d[i], d[i - c] + 1);
    }
    cout << d[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    while (t--) {
        solve();
    }
    
    return 0;
}
