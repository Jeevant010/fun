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
    size_t n, m;
    cin >> n >> m;
    vector<string> marks(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    
    vector<bool> successful(n, false);
    for (size_t subject = 0; subject < m; subject++)
    {
        char best = '0';
        for (size_t i = 0; i < n; i++)
        {
            if (marks[i][subject] > best)
            {
                best = marks[i][subject];
            }
        }
        for (size_t i = 0; i < n; i++)
        {
            if (marks[i][subject] == best)
            {
                successful[i] = true;
                //cout << i << "--->" << successful[i] << endl;
            }
        }
    }
    cout << count(successful.begin(), successful.end(), true);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}
