#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map
#define JAI ios::sync_with_stdio(0); cin.tie(0);
#define arrcin(f,n) r(i,n) cin>>f[i];
#define arrcout(f,n) r(i,n) cout<<f[i]<<" ";


int main() {
    JAI
    int n,c=0, bi = 0, b =0;
    cin>>n;
    v <int> f(n);
    arrcin(f,n);
    r(i,n){
        if(i%3 == 0) c+=f[i];
        else if(i%3 == 1) bi +=f[i];
        else b += f[i];
    }
    int ma = max({c,bi,b});
    if(ma == c) {
        cout<<"chest";
        return 0;
    }
    else if(ma == bi){
        cout<<"biceps";
    }
    else cout<<"back";
    
}
