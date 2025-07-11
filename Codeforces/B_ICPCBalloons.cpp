
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
        v <int> ba(26 , 0);
        int n, k=0;
        string s;
        cin >> n;
        cin>>s;
        for(int i=0, n=s.size(); i<n; i++){
            ba[ s[i] - 'A' ]++;
        }
        r(i,26){
            k += (ba[i] > 0) ? ba[i]+1 : 0;
        }
        cout<<k<<"\n";
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
