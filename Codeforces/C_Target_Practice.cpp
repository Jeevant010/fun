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
    v<string> st(10);
    r(i,10){
        string line;
        getline(cin, line);
        if (line.size() == 0) {
            i--;
            continue;
        }
        st[i] = line;
    }
    ll c = 0;
    r(i,10){
        r(j,10){
            if (st[i][j] == 'X') c += min(min(i + 1, 10 - i), min(j + 1, 10 - j));
        }
    }
    cout << c << "\n";
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
