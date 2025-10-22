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
    int n, ai, m, q;
        cin >> n; 
        v<int> a(n);
        for(int i = 0; i < n; ++i){
                cin >> ai;
                if(i) a[i] = a[i - 1] + ai; 
                else a[i] = ai;
        }
        cin >> m;
        for(int i = 0; i < m; ++i){
                cin >> q;
                int l = 0, r = n - 1, mid;
                while(l <= r){
                        mid = r - (r - l) / 2;
                        if(a[mid] == q) break;
                        if(a[mid] < q) l = mid + 1;
                        else r = mid - 1;
                }
                if(q > a[mid]) ++mid;
                cout << mid + 1 << "\n";
        }
        return ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t =1;
    while (t--) {
        solve();
    }
    
    return 0;
}
