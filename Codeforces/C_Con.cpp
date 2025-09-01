#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define eb emplace_back
#define pb push_back
#define po pop_back
#define pq priority_queue
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

ll power(ll base, ll exp) {
    ll result = 1;
    
    if (exp < 0) {
        base = 1 / base;
        exp = -exp;
    }

    while (exp > 0) {
        
        if (exp % 2 == 1) {
            result *= base;
        }
        
        base *= base;
        exp /= 2;
    }
    return result;
}

ll logBase3(ll x) {
    return std::log(x) / std::log(3.0);
}

vector<ll> p3(40);
    

void solve() {
    
    p3[0] = 1;
    for (int i = 1; i < 40; i++) {
        p3[i] = p3[i-1] * 3;
    }
    ll n;
        cin >> n;
        vector<int> dt;
        ll t = n;
        while (t) {
            dt.push_back(t % 3);
            t /= 3;
        }
        ll cost = 0;
        for (int i = 0; i < dt.size(); i++) {
            int d = dt[i];
            cost += d * (p3[i+1] + (i > 0 ? i * p3[i-1] : 0));
        }
        cout << cost << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}

