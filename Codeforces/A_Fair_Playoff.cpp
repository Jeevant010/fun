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
    int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        
        int max1 = max(s1, s2);
        int max2 = max(s3, s4);

        
        int overallMax1 = max(max1, max2);
        int overallMax2 = min(max1, max2);

        
        int scores[] = {s1, s2, s3, s4};
        sort(scores, scores + 4);

        
        if (overallMax1 == scores[3] && overallMax2 == scores[2]) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
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