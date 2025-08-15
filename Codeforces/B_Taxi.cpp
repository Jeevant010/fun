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
    int n;
    cin>>n;
    v<int> fe(4);
    r(i,n){
        int x; std::cin>>x;
        fe[x-1]++;
    }

    ll k = 0;
    k += fe[3];
    if( fe[0] <= fe[2] ) k+= (fe[2] + (fe[1]+1)/2 ) ; // 2 -> 4  //  3 -> 5  // 1 -> 4 
    else { // 2 -> 5 // 1 -> 8 // 3 -> 5 // 4 = 0   ans here is 5 + 3 + 1 = 9
        k += fe[2];
        k += fe[1]/2;
        k += fe[1]&1 == 1 ? 1 : 0;
        fe[0] = (fe[0]  - fe[2] - (fe[1]&1 == 1 ? 2 : 0));
        k += ( fe[0] <= 0 ) ? 0 : (fe[0] % 4 == 0) ? fe[0]/4 : fe[0]/4 + 1; 
    }
    std::cout<<k<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
}