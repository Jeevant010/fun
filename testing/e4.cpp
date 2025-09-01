
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

bool is_palindrome(const vector<int>& b) {
    int m = b.size();
    for (int i = 0; i < m / 2; i++) {
        if (b[i] != b[m - 1 - i]) 
            return false;
    }
    return true;
}


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
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << "YES\n";
            return;
        }
        if (k == 1) {
            cout << "YES\n";
            return;
        }
        if (is_palindrome(a)) {
            cout << "YES\n";
            return;
        }
        if (n <= k) {
            cout << "NO\n";
            return;
        }
        auto b = a;
        sort(trvs(b));
        int v = b[k-1];
        b.clear();
        r(i,n) {
            if( a[i] < v ) b.push_back(a[i]);
        }
        deque<int> d;
        for(auto i : b){
            d.push_back(i);
        }
        int c = b.size() - k + 1;
        while(d.size() > 1){
            if(d.front() );
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
