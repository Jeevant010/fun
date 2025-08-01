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
int a[26]= {0};

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool f = true;
    for (auto& x : s) {
        x = tolower(x);
    }

    r(i, n){
        a[s[i] - 'a']++;
    }
    for(auto i : a){
        if( i == 0 ) {
            f = false;
            break;
        }
    }
    if(f) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1 ;
    while (t--) {
        solve();
    }
    
    return 0;
}
