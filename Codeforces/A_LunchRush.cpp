#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map

int main() {
    ll n, k, mx = -1000000000; cin >> n >> k;
    while(n--){
        ll f, t; cin >> f >> t;
        if(t <= k) mx = max(mx, f);
        else mx = max(mx, (f - (t - k)));
    }
    cout << mx << endl;

}
