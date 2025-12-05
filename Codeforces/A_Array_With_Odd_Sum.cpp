#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=1; i<=n; i++)
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
        int n;
        cin >> n;
        if (n < 1) {
            cout << "NO\n";
            return;
        }

        int oddCount = 0, evenCount = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) evenCount++;
            else oddCount++;
        }

        // Conditions for possible odd sum:
        // 1. At least one odd number
        // 2. Not all numbers are odd when n is even
        if (oddCount > 0 && (evenCount > 0 || n % 2 == 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
 
 