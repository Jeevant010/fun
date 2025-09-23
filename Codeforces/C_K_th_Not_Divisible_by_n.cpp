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

int kthNonDivisible(int n, int k) {
    int low = 1, high = 1e9;
    while (low <= high) {
    int mid = (low + high) / 2;
    int count = mid - mid / n; // Count of numbers not divisible by n up to mid
    if (count >= k)
    high = mid - 1;
    else
    low = mid + 1;
    }
    return low;
}

void solve() {
    int n , k; 
    cin>>n>>k;
    cout<<kthNonDivisible(n , k)<<"\n";
    // cout<<((k - 1) / (n - 1)) + k<<"\n";

    
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
