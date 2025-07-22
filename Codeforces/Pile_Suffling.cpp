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
    int n;
        cin >> n;
        vector<ll> a(n), b(n), c(n), d(n);
        ll SA = 0, SB = 0, SC = 0, SD = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i] >> d[i];
            SA += a[i];
            SB += b[i];
            SC += c[i];
            SD += d[i];
        }
        if (SA != SC || SB != SD) {
            cout << "-1\n";
            return;
        }

        ll moves = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] > d[i]) {
                moves += a[i] + (b[i] - d[i]);
            } else {
                moves += max(0LL, a[i] - c[i]);
            }
        }
        cout << moves << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
