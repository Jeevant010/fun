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
    int x , y ;
	cin >> x >> y ;
	
	--y ;
	
	if (y > x || (x > 0 && y <= 0))
	{
		cout << "No" ;
		return ;
	}
	
	if ((y % 2 == 0 && x % 2 == 0) || (y % 2 && x % 2))
		cout << "Yes" <<"\n" ;
	else
	    cout << "No" <<"\n";
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
