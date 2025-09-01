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

void solve() {
    vector<ll> f(4);
    r(i,4) cin>>f[i];
    int t = 0;
    ll d = 0;
    r(i,4){
        if( f[i] > d ){
            t = i;
            d = f[i];
        }
    }
    r(i,4){
        if( i == t ) continue;
        cout<<f[t]-f[i]<<" ";
    }
    cout<<"\n";
        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while( t-- ){
        solve();
    }
    return 0;
}
