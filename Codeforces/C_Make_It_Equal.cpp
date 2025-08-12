#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define eb emplace_back
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

ll mod = 1e9+7;
ll mod2 = 998244353;
 
void solve(){
    ll n, k; cin >> n >> k;
    map<ll, ll> s;
    for (ll i = 0; i < n; i++){
        ll x; cin >> x;
        s[x % k]++, s[k - x % k]++;
    } 
    for (ll i = 0; i < n; i++){
        ll x; cin >> x;
        s[x % k]--, s[k - x % k]--;
    }
 
    for (auto it : s){
        if (it.second) { cout << "NO" << '\n'; return;}
    }
    cout << "YES" << '\n';
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
