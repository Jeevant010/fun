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


void solve() {
    string s;
    cin>>s;
    int n = s.length() , c = 1;
    bool f = false;
    r(i,n){
        if(s[i] == '0'){
            if( s[i] == '0' && s[i+1] == '0' ) c++;
            else c = 1;
        }
        else {
            if( s[i] == '1' && s[i+1] == '1' ) c++;
            else c = 1;
        }
        
        if( c>=7 ) f = true;
    }
    if(f) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}
