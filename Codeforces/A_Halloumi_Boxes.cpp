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
    ll n,k;
    cin>>n>>k;
       v<int> v(n);
       r(i,n){
        cin>>v[i];
       }
       bool isSorted=true;
       for( int i = 1; i<n ; i++){
        if(v[i]<v[i-1])isSorted=false;
       }
       if(isSorted) cout<<"YES"<<"\n";
       else{
        if(k==1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
       }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
