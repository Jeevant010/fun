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
     int n, s, x = -1, y = -1;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> s;
    mp[s]++;
    if(x == -1)x = s;
    else if(s != x)y = s;
  }
  if(mp.size() >= 3) cout << "No\n";
  else if(mp.size() == 1) cout << "Yes\n";
  else if(abs(mp[x]-mp[y]) <= 1) cout << "Yes\n";
  else cout << "No\n";
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
 
 