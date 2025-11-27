#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_m1ap
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
    int a,b;
    v<int>v1;
    int k=0;
    
    for(int i=0;i<8;i++){
            cin >> a ;
            v1.push_back(a);
        }
        b=1;
        for(int i=k;i<v1.size();i=i+2){
            for(int j=i+2;j<v1.size();j=j+2){
                if(v1[i]==v1[j]){
                  b=b*abs(v1[i+1]-v1[j+1]);
                }
            }
        }
        k=k+8;
        cout << b <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}
