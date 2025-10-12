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
   ll n , a = 0;
   cin>>n;

    string s = to_string(n);
    if( s.length() == 1 ){
        a = 1;
    }
    else if( s.length() == 2){
        a = 3;
    }
    else if(s.length() == 3){
        a = 6;
    }
    else if( s.length() == 4){
        a = 10;
    }
    a += 10 * (stoi(string(1, s[0])) - 1);
    cout<<a<<"\n"; 

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>>t;
    while (t--) {
        solve();
    }
    
}
