#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=1; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define eb emplace_back
#define pb push_back
#define po pop_back
#define pq priority_queue
#define INF 1e9

ll f[1000000];

void myfun(){
    f[0] = f[1] = 1;
    for( ll i=2;i<1000000;i++){
        if (f[i]==0){
            for( ll j=i*i;j<1000000;j+=i){
                f[j] = 1;
            }
        }
    }
}

int perfect(ll n){
    double sn = sqrt(n);
    if(sn == int(sn)){
        return 1;
    }
    else{
        return 0;
    }
}

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
        ll x;
        cin>>x;
        if( x==4 ) cout<<"YES"<<"\n";
        else if( x%2 == 0) cout<<"NO"<<"\n";
        else if( perfect(x) == 1 && f[int(sqrt(x))] == 0 ) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    myfun();
    int t;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}
