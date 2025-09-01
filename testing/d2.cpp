


#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void fac(ll n, ll k, vector<ll>& a){
    int s = 0;
    if( k == 0) {
        for(int i=0; i<n; i++){
            s += __builtin_popcountll(a[i]);
        }
        cout<<s<<endl;
        return;
    }
    if(n == 1){
        s = 64 - __builtin_clzll(k+a[0]);
        if( s == __builtin_popcountll(k+ a[0])) {
            cout<<s<<endl;
            return;
        }
        cout<<s-1<<endl;
        return;
    }
    unordered_map<int, int> m(n);
    int best = 64 - __builtin_clzll(k);

    for(int i=0; i<n; i++){
        m[a[i]] = __builtin_popcountll(a[i]);
        s += __builtin_popcountll(a[i]);
    }
    ll t=0;
    for(int i=0; i<n && k>t; i++){
        if( __builtin_popcountll(a[i] + 1) > m[a[i]] ) {
            m[a[i]] = __builtin_popcountll(a[i] + 1);
            t++;
            s++;
        }
    }

    cout<<s<<endl;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll n, k;
        cin>>n >> k;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        fac(n,k, v);
    }
}