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
    char x[20], y;
    cin>>x;
    for(int i = 0 ; i < strlen(x) ; i++) {
        if(i == 0) {
            if(x[i] == '9')
                continue;
        }
        y = '9' - x[i] + '0';
        if(x[i] > y)
            x[i] = y;
    }
    cout<<x<<"\n";
    

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
