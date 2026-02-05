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

    string s;
	int n;
	cin>>s>>n;
	int len =s.length();
	set<char>sa;
	for(int i=0;i<len;i++)
	{
		sa.insert(s[i]);
			}
	if(len<n){
		cout<<"impossible";
	}
	else{
		int size2=sa.size();
		if(size2>=n)cout<<"0";
		else{
			cout<<n-size2;
		}
	}


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
