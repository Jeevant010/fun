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
    bool fbig = true;
    ll n; 
    cin>>n;
    deque<int> dq;
    r( i , n){
        int c;
        cin>>c;
        dq.push_back(c);
    }


    while( !dq.empty()){
        if( fbig ){
            if( dq.back() > dq.front() ){
                cout<<"L";
                dq.pop_front();
            }
            else{
                cout<<"R";
                dq.pop_back();
            }
        }
        else{
            if( dq.front() > dq.back() ){
                cout<<"L";
                dq.pop_front();
            }
            else{
                cout<<"R";
                dq.pop_back();
            }
        }
        fbig = !fbig;
    }
    cout<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
