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
    ll n,ans=0; cin >> n;
    vector<int>a(n);
    r(i,n){
        cin >> a[i];
    }
    list<int>b;
    list<int>c;
    bool ok=false;
    int mn=*min_element(trvs(a));
    for(int i=0; i<n; i++){
        if(mn==a[i]) b.push_back(a[i]);
        else c.push_back(a[i]);
        if(a[i]!=mn) ok=true;
    }
    if(!ok){
        cout << -1 << "\n";
        return;
    }
    cout << b.size() << " " << c.size() << "\n";
    for(auto it:b){
        cout << it << " ";
    }
    cout << "\n";
    for(auto it:c){
        cout << it << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
    
}
