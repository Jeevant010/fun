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
    int n;
    cin >> n;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        int candy;
        cin >> candy;
        if (candy == 1) count1++;
        else count2++;
        }

        int totalWeight = count1 + 2 * count2;

        if (totalWeight % 2 != 0) {
        cout << "NO" << "\n";
        } else {
            int halfWeight = totalWeight / 2;
            if (halfWeight % 2 == 0 || (halfWeight % 2 == 1 && count1 > 0)) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
    }
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
