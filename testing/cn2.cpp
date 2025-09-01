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

const vector<int> primes = {3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

void solve() {
    long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (k % 2 == 1) {
            for (long long x : a) {
                if (x % 2 == 0) {
                    cout << x << " ";
                } else {
                    cout << x + k << " ";
                }
            }
            cout << "\n";
        } else {
            long long g = 3;
            for (int p : primes) {
                if (k % p != 0) {
                    g = p;
                    break;
                }
            }
            long long k_mod = k % g;
            long long inv = 1;
            long long exp = g - 2;
            long long base = k_mod;
            while (exp > 0) {
                if (exp & 1) {
                    inv = (inv * base) % g;
                }
                base = (base * base) % g;
                exp >>= 1;
            }
            for (long long x : a) {
                long long r = (g - (x % g)) % g;
                long long t_i = (r * inv) % g;
                cout << x + t_i * k << " ";
            }
            cout << "\n";
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
// #include <bits/stdc++.h>
// using namespace std;



// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
        
//         }
//     }
//     return 0;
// }