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
    ll n, t;
    cin >> n >> t;
    v<ll> k(n);
    r(i,n) cin >> k[i];
    
    ll c = 0;
    while(!k.empty()) {
        ll ma = LLONG_MIN, idx = -1;

        for (ll i = 0; i < (ll)k.size(); i++) {
            if (k[i] > ma && k[i] <= t) {
                ma = k[i];
                idx = i;
            }
        }

        if (idx == -1) {  
            c += k.size();
            break;
        }

        k.erase(k.begin() + idx); 

        for (ll i = 0; i < (ll)k.size(); i++) {
            k[i] *= 2;
        }
    }
    cout << c << "\n";
    

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
