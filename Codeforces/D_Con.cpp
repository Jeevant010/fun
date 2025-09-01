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

long long pow3[50];

void precompute_power() {
    pow3[0] = 1;
    for (int i = 1; i < 50; i++) {
        pow3[i] = pow3[i-1] * 3;
    }
}

void solve() {
        long long n, k;
        cin >> n >> k;
        if (k > n) {
            cout << -1 << '\n';
            return;
        }
        long long m = 0;
        long long temp = n;
        while (temp) {
            m += temp % 3;
            temp /= 3;
        }
        if (k < m) {
            cout << -1 << '\n';
            return;
        }
        if ((n - k) % 2 != 0) {
            cout << -1 << '\n';
            return;
        }
        long long D = (n - k) / 2;
        long long cost = 3 * n;
        vector<long long> counts(50, 0);
        counts[0] = n;
        int level = 0;
        while (D > 0 && level < 49) {
            if (counts[level] >= 3) {
                long long comb = min(D, counts[level] / 3);
                counts[level] -= comb * 3;
                counts[level+1] += comb;
                cost += comb * pow3[level];
                D -= comb;
            } else {
                level++;
            }
        }
        if (D > 0) {
            cout << -1 << '\n';
        } else {
            cout << cost << '\n';
        }
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
