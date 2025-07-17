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
    long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string dec("");
        long idx(n - 1);
        while(idx >= 0){
            long rank(0);
            if(s[idx] == '0'){
                rank = 10 * (s[idx - 2] - '0') + (s[idx - 1] - '0');
                idx -= 3;
            }
            else{
               rank = (s[idx] - '0');
               idx--;
            }
            
            char x = 'a' + rank - 1;
            dec = x + dec;
        }

        std::cout << dec << "\n";
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
