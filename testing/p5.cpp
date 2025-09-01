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

const int MOD = 998244353;
const int MAX_N = 400000;

vector<ll> fac(MAX_N + 1);
vector<ll> inv_fac(MAX_N + 1);


ll mod_exp(ll base, ll exp, ll mod = MOD) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return res;
}

void precompute() {
    fac[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        fac[i] = (fac[i - 1] * i) % MOD;
    }
    inv_fac[MAX_N] = mod_exp(fac[MAX_N], MOD - 2, MOD);
    for (int i = MAX_N - 1; i >= 0; i--) {
        inv_fac[i] = (inv_fac[i + 1] * (i + 1)) % MOD;
    }
}

ll nCr(int n, int k) {
    if (k < 0 || k > n) 
        return 0;
    ll res = fac[n];
    res = (res * inv_fac[k]) % MOD;
    res = (res * inv_fac[n - k]) % MOD;
    return res;
}


void solve() {
        ll n, x;
        cin >> n >> x;
        if (x < n) {
            cout << 0 << '\n';
            return;
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            ll term = nCr(n, i) * nCr(x - i, n) % MOD;
            if (i % 2 == 1) {
                ans += (  term + MOD) ;
                ans = ans % MOD;
            } else {
                ans +=  term;
                ans = ans % MOD;
            }
        }
        cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    precompute();
    int t ;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
