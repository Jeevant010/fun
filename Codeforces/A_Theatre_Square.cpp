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
    ll n , m , k;
    cin>>n>>m>>k;

    ll l = (n - 1)/k + 1;
    ll s = (m - 1)/k + 1;
    // here you can see that the 6 6 can have 4*4 of 4 so we can check
    // also if l = (6 -1 ) + 1/4 = 2 ans also for s 2 so can i write the answer to bs l*s = 4
    // 
    cout<<l*s<<"\n";
    
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
