#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define p pair
#define m unordered_map

ll gcd(ll a, ll b) {
    if (b > a) swap(a, b);
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return abs(a * b) / gcd(a, b);
}

ll og2(ll x) {
    return (64 - __builtin_clzll(x) - 1);
}

void solve() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> v(n);

    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[i].first = {a, -b};   
    }
    for (int i = 0; i < n; i++) v[i].second = i;

    sort(v.begin(), v.end());

    int mn = -1e9;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (v[i].first.first > mn) {
            mn = v[i].first.first;
            ans.push_back(v[i].second + 1); 
        }
    }

    cout << ans.size() << "\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
