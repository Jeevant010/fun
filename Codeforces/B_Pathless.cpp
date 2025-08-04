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


void solve () {
    int n , m , sm =0 ;
    int c[] = { 0 , 0 , 0};
    cin>>n>>m;
    vector<int> p(n);
    r(i,n) {
        int x;
        cin>>x;
        sm += x;
        c[x]++;
    }
        if( m - sm == 1 || sm > m ){
            while(c[0]--) cout<<"0 ";
            while(c[2]--) cout<<"2 ";
            while(c[1]--) cout<<"1 ";
            cout<<"\n"; 
        }
        else cout<<-1<<"\n";
        
    
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
