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

    v <int> primes = {2, 3, 5, 7};

void solve() {
    long long l, r;
        cin >> l >> r;
        long long total = r - l + 1;
        long long bad = 0;

        for (int mask = 1; mask < 16; ++mask) {
            long long product = 1;
            int cnt = 0;
            for (int i = 0; i < 4; ++i) {
                if (mask & (1 << i)) {
                    product *= primes[i];
                    cnt++;
                }
            }
            cout<<product<<"\n";
            long long count_div = (r / product) - ((l - 1) / product);
            if (cnt % 2 == 1) {
                bad += count_div;
            } else {
                bad -= count_div;
            }
        }

        cout << (total - bad) << '\n';
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
