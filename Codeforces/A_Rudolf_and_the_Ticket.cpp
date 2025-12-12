#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

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
     int n, m, k;
        cin >> n >> m >> k;
        int ans = 0;
        vector<int> v1(n), v2(m);

        for (int i = 0; i < n; i++)
            cin >> v1[i];

        for (int i = 0; i < m; i++)
            cin >> v2[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v1[i] + v2[j] <= k)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t =1;
    cin>>t;
    while (t--) {
        solve();
    }
    
}
