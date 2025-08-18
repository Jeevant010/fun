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
    int n; cin>>n;
    int c = 1;
    v<int> a;
    while( n > 0 ){
        if( n % 10 != 0 ){
            a.push_back(c*(n%10));
        } 
        n /= 10;
        c *= 10;
    }
    cout<<a.size()<<"\n";
    r(i,a.size()) cout<<a[i]<<" ";
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>>t;
    while (t--) {
        solve();
    }
    
}
