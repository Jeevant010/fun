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
    int a , b ,c ;
    cin>>a>>b>>c;
    int ma = max({a ,b ,c});
    int mm = min({ a , b , c});
    if ( a != ma && a != mm) {
            cout<<a<<"\n";
            return;
    }
    else if ( b != ma && b != mm) {
            cout<<b<<"\n";
            return;
    }
    else if ( c != ma && c != mm) {
            cout<<c<<"\n";
            return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}
