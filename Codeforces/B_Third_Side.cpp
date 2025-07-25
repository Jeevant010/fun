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
    int n, s=0;
    cin>>n;
    v<int> a(n);
    r(i,n) cin>>a[i];
    if(n == 1) {
        cout<<a[0]<<"\n";
        return;
    }
    s = a[n-1];
    r(i,n-1){
        s += (a[i]-1);
    }
    cout<<s<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
