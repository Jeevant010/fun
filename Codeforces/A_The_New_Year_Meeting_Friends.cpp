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
    int a, b , c;
    cin>>a>>b>>c;
    int x1 = abs(a-b);
    int x2 = abs(b-c);
    int x3 = abs(a-c);
    int ma = max({x1, x2, x3});
    if( x1 == ma ) cout<<x2+x3<<"\n";
    else if( x2 == ma ) cout<<x1+x3<<"\n";
    else  cout<<x2+x1<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
}