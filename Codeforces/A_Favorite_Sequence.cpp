#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=1; i<=n; i++)
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
    ll n,a[305];
    cin>>n;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
        }
        ll div = 0;
        vector<ll>v;
        div = (n/2) + (n%2);
        for(ll i=1; i<=div; i++){
            if(n&1){
                if(i == div){
                    v.push_back(a[i]);
                    continue;
                }
            }
            v.push_back(a[i]);
            v.push_back(a[n-i+1]);
        }
        for(ll i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
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
 
 