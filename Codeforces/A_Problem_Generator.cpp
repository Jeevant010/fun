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
    int n, m;
        cin >> n >> m; // n = number of problems, m = required count per letter

        string s;
        cin >> s; // Problem letters string

        // Count occurrences of each letter A–G
        vector<int> freq(7, 0);
        for (char c : s) {
            freq[c - 'A']++;
        }

        int extraNeeded = 0;
        for (int i = 0; i < 7; i++) {
            if (freq[i] < m) {
                extraNeeded += (m - freq[i]); // Add missing problems
            }
        }

        cout << extraNeeded << "\n";
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
 
 