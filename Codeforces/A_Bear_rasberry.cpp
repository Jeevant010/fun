#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k=0;
    cin>>n>>m;
    v <int> l(n);
    r(i,n){
        cin>>l[i];
    }
    r(i,n-1){
        if( (l[i] - l[i+1]) > k ){
            k = max(k, l[i] - l[i+1]);
        }
    }
    if (k-m >0) cout<<k-m;
    else cout<<0;
}
