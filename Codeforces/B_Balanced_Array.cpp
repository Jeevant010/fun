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
    ll n;
    cin>>n;
    if( n % 4 == 0) {
        cout<<"YES\n";
        for(ll i=2; i<=n; i += 2) cout<<i<<" ";
        ll j = 1 , s = 0;
        for(ll i = 0 ; i<n/2 - 1; i++){
            cout<<j<<" ";
            s += j;
            j += 2;
        }
        cout<< ( n/2 ) * ( n/2 + 1 ) - s<<"\n";       
    }
    else {
        cout<<"NO\n";
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
