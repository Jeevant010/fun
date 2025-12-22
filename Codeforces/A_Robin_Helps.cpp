#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define eb emplace_back
#define pb push_back
#define po pop_back
#define pq priority_queue
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
    int n, k;
        cin>>n>>k;

        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int gold = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(arr[i] >= k){
                gold += arr[i];
            }
            else if(arr[i] == 0 && gold> 0){
                gold--;
                ans++;
            }
        }
        cout<<ans<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}
