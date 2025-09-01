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
    cin>>s;
    // int n = s.size();
    // sort( trvs(s));
    // for(int i=0; i<n-1; i++){
    //     if( s[i] == 'F' ){
    //         if(s[i+1] == 'F'){
    //             if( s[i+2] == 'T' ){
    //                 swap( s[i+1] , s[i+2] );
    //             }
    //         }
    //     }
    //     if( s[i] == 'N' ){
    //         if(s[i+1] == 'T'){
    //             if( s[i+2] == 'T' ){
    //                 swap( s[i] , s[i+1] );
    //             }
    //         }
    //     }
    // }
    vector<long long> freq(26, 0);
        for (char c : s) {
            freq[c - 'A']++;
        }
        string result;
        // Append all letters except 'F', 'T', 'N'
        for (int i = 0; i < 26; i++) {
            char c = 'A' + i;
            if (c == 'F' || c == 'T' || c == 'N') continue;
            result.append(freq[i], c);
        }
        // Append all T's
        result.append(freq['T' - 'A'], 'T');
        // Append all F's
        result.append(freq['F' - 'A'], 'F');
        // Append all N's
        result.append(freq['N' - 'A'], 'N');

        cout << result << "\n";
        
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
