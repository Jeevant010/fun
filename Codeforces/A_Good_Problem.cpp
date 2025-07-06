#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

ll og2(ll x){
    return (64 - __builtin_clzll(x) - 1);
}

void fun(){
    ll n, r, l, k;
    cin>>n>>l>>r>>k;
    if( n%2 ){
        cout<<l<<endl;
        return;
    }
    if(n == 2){
        cout<<-1<<endl; 
        return;
    }
    ll np = (1ll << (og2(l)+1));
    if(np > r){
        cout<<-1<<endl;
        return;
    }
    if( k <= n-2) cout<<l<<endl;
    else cout<<np<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        fun();
    }
}
