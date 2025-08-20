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
    int x1 = a+b;
    int x2 = b+c;
    int x3 = c+a;
    
    if( x1 == c ) cout<<"YES"<<"\n";
    else if( x2 == a ) cout<<"YES"<<"\n";
    else if( x3 == b ) cout<<"YES"<<"\n";
    else  cout<<"NO"<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    
}