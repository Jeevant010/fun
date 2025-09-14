#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define INF 1e9
#define pb push_back


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
        ll n;
		cin >> n;
		map<ll, ll> mp;
		v<ll> a(n);
		for(ll i = 0; i < n; ++i){
			cin >> a[i];
			++mp[a[i]];
		}
		ll dp[(ll)1e5 + 5]{};
		dp[1] = mp[1];
		dp[2] = max(mp[1], mp[2] * 2);
		for(ll i = 3; i <= 1e5; ++i){
			dp[i] = max(mp[i] * i + dp[i - 2], dp[i - 1]);
		}
		cout << dp[*max_element(trvs(a))] << "\n";

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
