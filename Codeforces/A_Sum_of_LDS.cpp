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
    int n;
    cin>>n;
    v<int> s(n);
    r(i,n) cin>>s[i];
    v<ll> dp(n, 0);
    dp[0] = 1;
    
    ll a =1;
    for(int j = 1 ; j < n; j++){
        if(s[j] > s[j-1]) dp[j] += dp[j-1] + 1;
        else dp[j] += dp[j-1] + (j+1);
        a += dp[j];
    }
    cout<<a<<"\n";
    // int n; cin >> n;
	// 	vector<int> p(n);
	// 	for(auto &x : p) cin >> x;
 
	// 	ll ans = 1;
	// 	vector<ll> dp(n, 0); dp[0] = 1;
	// 	for(int i = 1; i < n; i++) {
	// 		if(p[i] > p[i-1]) dp[i] = dp[i-1] + 1;
	// 		else dp[i] = dp[i-1] + (i+1);
	// 		ans += dp[i];
	// 	}
	// 	cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>>t;
    while (t--) {
        solve();
    }
    
}
