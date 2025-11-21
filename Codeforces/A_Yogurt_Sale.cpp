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
    long long n, a, b;
        cin >> n >> a >> b;

        // If buying two separately is cheaper or equal, buy all individually
        if (2 * a <= b) {
            cout << n * a << "\n";
        } else {
            // Buy as many pairs as possible at price b
            long long pairs = n / 2;
            long long singles = n % 2;
            long long cost = pairs * b + singles * a;
            cout << cost << "\n";
        }
        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}
