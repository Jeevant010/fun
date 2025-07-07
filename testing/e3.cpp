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

ll solve(vector<ll>& b) {
    v <ll> Core;
    ll n = b.size();
    ll s = 1;
    r(i,n-1){
        if( b[i+1] % b[i] != 0){
            ll k = b[i]/gcd(b[i+1] , b[i]);
            s = lcm(k, s);
        }
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        cout << solve(b) << '\n';
    }
    
    return 0;
}
