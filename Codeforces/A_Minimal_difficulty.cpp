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
    int n, m = INT_MAX;
    cin>>n;
    v<int> l(n);
    arrcin(l,n);
    
    int mx = 0;
    for(int i=1; i<n;i++){
        mx = max(mx , l[i]-l[i-1]);
    }
    int mn = mx;
    mx = INT_MAX;
    for(int i=1; i<n-1; i++){
        if(l[i+1] - l[i-1] <=mn){
            cout<<mn;
            return 0;
        }
        else mx = min(mx, l[i+1] - l[i-1]);
    }
    
    cout<<mx;
    
}
