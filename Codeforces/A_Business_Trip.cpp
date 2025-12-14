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
    int k, a[12], total(0);
    cin >> k;
    for (size_t i = 0; i < 12; ++i)
    {
        cin >> a[i];
        total += a[i];
    }

    if (total < k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(a, a + sizeof(a) / sizeof(a[0]), greater<int>());
        int sum = 0;
        int month = 0;
        while (sum < k)
        {
            sum += a[month];
            month += 1;
        }
        cout << month << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
}
